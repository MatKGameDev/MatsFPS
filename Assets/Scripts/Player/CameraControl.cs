using UnityEngine;

public class CameraControl : MonoBehaviour
{
    public float mouseSensitivity;

    public Transform playerTransform;

    void Awake()
    {
        //Cursor.lockState = CursorLockMode.Locked;
        //Cursor.visible   = false;
    }

    public void UpdateMouseInput(float a_axisX, float a_axisY, ref float a_yaw, ref float a_pitch)
    {
        float mouseX = a_axisX * mouseSensitivity * BoltNetwork.FrameDeltaTime;
        float mouseY = a_axisY * mouseSensitivity * BoltNetwork.FrameDeltaTime;

        a_yaw += mouseX;
        a_yaw %= 360f;

        a_pitch -= mouseY;
        a_pitch =  Mathf.Clamp(a_pitch, -80f, 80f);
    }

    public void UpdateRotation(float a_pitch)
    {
        transform.localRotation = Quaternion.Euler(a_pitch, 0f, 0f); //rotate the camera vertically
    }
}