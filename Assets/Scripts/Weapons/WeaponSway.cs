using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponSway : MonoBehaviour
{
    public float smoothingStrength;

    [Header("Look-Based Positional Sway")]
    [SerializeField] private float swayStrengthHorizontal;
    [SerializeField] private float swayStrengthVertical;
    [SerializeField] private float maxSwayAmount;

    [Header("Movement-Based Positional Sway")]
    [SerializeField] private float positionSwayStrengthHorizontal;
    [SerializeField] private float positionSwayStrengthVertical;
    [SerializeField] private float maxPositionSwayAmount;

    [Header("Movement-Based Rotational Sway")]
    [SerializeField] private float tiltSwayStrengthHorizontal;
    [SerializeField] private float tiltSwayStrengthVertical;
    [SerializeField] private float maxTiltSwayAmount;

    PlayerMotor m_player;

    Vector3    m_initialPos;
    Quaternion m_initialRot;

    // Start is called before the first frame update
    void Start()
    {
        m_initialPos = transform.localPosition;
        m_initialRot = transform.localRotation;

        GameObject playerObject = MyHelper.FindFirstParentWithComponent(this.gameObject, typeof(PlayerMotor));
        m_player = playerObject.GetComponent<PlayerMotor>();
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 realPlayerUnitVelocity = CalculateRealPlayerUnitVelocity();

        ApplyPositionalSway(realPlayerUnitVelocity);
        ApplyRotationalSway(realPlayerUnitVelocity);
    }

    Vector3 CalculateRealPlayerUnitVelocity()
    {
        Vector3 realPlayerLocalVelocity = m_player.transform.InverseTransformDirection(m_player.GetVelocity()); //get relative velocity from the inverse transform direction

        //since the player's grounded y velocity may not be zero, we need to account for it
        if (m_player.IsGrounded())
            realPlayerLocalVelocity.y -= m_player.GetGroundedVelocityY();

        return Vector3.Normalize(realPlayerLocalVelocity);
    }

    void ApplyPositionalSway(Vector3 a_playerUnitVelocity)
    {
        //calculate the magnitude of the player movement-based sway
        float moveSwayX = a_playerUnitVelocity.x * positionSwayStrengthHorizontal * -1f;
        float moveSwayY = a_playerUnitVelocity.y * positionSwayStrengthVertical   * -1f;

        //calculate the magnitude of the player look-based sway
        float lookSwayX = Input.GetAxis("Mouse X") * swayStrengthHorizontal * -1f;
        float lookSwayY = Input.GetAxis("Mouse Y") * swayStrengthVertical   * -1f;

        //clamp all sway values
        moveSwayX = Mathf.Clamp(moveSwayX, -maxPositionSwayAmount, maxPositionSwayAmount);
        moveSwayY = Mathf.Clamp(moveSwayY, -maxPositionSwayAmount, maxPositionSwayAmount);

        lookSwayX = Mathf.Clamp(lookSwayX, -maxSwayAmount, maxSwayAmount);
        lookSwayY = Mathf.Clamp(lookSwayY, -maxSwayAmount, maxSwayAmount);

        Vector3 newPos = new Vector3(0f, lookSwayY + moveSwayY, lookSwayX + moveSwayX) + m_initialPos;

        //apply sway with smoothing
        transform.localPosition = Vector3.Lerp(
            transform.localPosition,
            newPos,
            Time.deltaTime * smoothingStrength);
    }

    void ApplyRotationalSway(Vector3 a_playerUnitVelocity)
    {
        float tiltY = a_playerUnitVelocity.x * tiltSwayStrengthHorizontal;
        float tiltX = a_playerUnitVelocity.y * tiltSwayStrengthVertical;
        float tiltZ = a_playerUnitVelocity.z * tiltSwayStrengthHorizontal * 0.5f;

        Quaternion newRot = Quaternion.Euler(new Vector3(tiltY, 0f, tiltX + tiltZ)) * m_initialRot;

        transform.localRotation = Quaternion.Slerp(
            transform.localRotation,
            newRot,
            Time.deltaTime * smoothingStrength);
    }
}
