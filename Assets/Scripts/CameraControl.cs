using UnityEngine;

public class CameraControl : Bolt.EntityBehaviour<IPlayerStateFPS>
{
    public float mouseSensitivity;

    public Transform playerTransform;

    public float playerOffsetY;

    private float m_VerticalRotation = 0f;

    public override void Attached()
    {
        state.SetTransforms(state.CameraControlTransform, transform);
        //Cursor.lockState = CursorLockMode.Locked;
        //Cursor.visible   = false;
    }

    public override void SimulateOwner()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * BoltNetwork.FrameDeltaTime;
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * BoltNetwork.FrameDeltaTime;

        m_VerticalRotation -= mouseY;
        m_VerticalRotation =  Mathf.Clamp(m_VerticalRotation, -80f, 80f);

        transform.localRotation = Quaternion.Euler(m_VerticalRotation, 0f, 0f); //rotate the camera vertically
        playerTransform.Rotate(Vector3.up * mouseX); //rotate the player horizontally
    }
}