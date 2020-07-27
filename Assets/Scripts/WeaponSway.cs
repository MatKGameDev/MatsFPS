using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponSway : MonoBehaviour
{
    public float smoothingStrength;

    [Header("Look-Based Positional Sway")]
    public float swayStrengthHorizontal;
    public float swayStrengthVertical;
    public float maxSwayAmount;

    [Header("Movement-Based Positional Sway")]
    public float positionSwayStrengthHorizontal;
    public float positionSwayStrengthVertical;
    public float maxPositionSwayAmount;

    [Header("Movement-Based Rotational Sway")]
    public float tiltSwayStrengthHorizontal;
    public float tiltSwayStrengthVertical;
    public float maxTiltSwayAmount;

    PlayerControl m_player;

    Vector3 initialPos;
    Quaternion initialRot;

    // Start is called before the first frame update
    void Start()
    {
        initialPos = transform.localPosition;
        initialRot = transform.localRotation;

        GameObject playerObject = MyHelper.FindFirstParentWithComponent(this.gameObject, typeof(PlayerControl));
        m_player = playerObject.GetComponent<PlayerControl>();
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

        //since the player's grounded velocity may not be zero, we need to account for it
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

        Vector3 newPos = new Vector3(0f, lookSwayY + moveSwayY, lookSwayX + moveSwayX) + initialPos;

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

        Quaternion newRot = Quaternion.Euler(new Vector3(tiltY, 0f, tiltX)) * initialRot;

        transform.localRotation = Quaternion.Slerp(
            transform.localRotation,
            newRot,
            Time.deltaTime * smoothingStrength);
    }
}
