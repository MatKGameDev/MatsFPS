using UnityEngine;

public class CameraControl : MonoBehaviour
{
    public float mouseSensitivity;

    public Transform playerTransform;

    public float playerOffsetY;

    private float m_VerticalRotation = 0f;

    void Start()
    {
        //Cursor.lockState = CursorLockMode.Locked;
        //Cursor.visible   = false;
    }

    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

        m_VerticalRotation -= mouseY;
        m_VerticalRotation =  Mathf.Clamp(m_VerticalRotation, -80f, 80f);

        transform.localRotation = Quaternion.Euler(m_VerticalRotation, 0f, 0f); //rotate the camera vertically
        playerTransform.Rotate(Vector3.up * mouseX); //rotate the player horizontally
    }
}
