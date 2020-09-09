using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerOffline : MonoBehaviour
{
    public CameraControl cameraController;

    public WeaponHitscan activeWeapon;

    PlayerMotor m_playerMotor;

    bool m_forward;
    bool m_backward;
    bool m_left;
    bool m_right;

    bool m_fire;

    bool m_jump;
    bool m_dash;

    float m_yaw;
    float m_pitch;

    void Awake()
    {
        m_playerMotor = GetComponent<PlayerMotor>();
    }

    void Start()
    {
        GameState.instance.CurrentState = GameState.State.gameplay;

        cameraController.mouseSensitivity = UserSettings.mouseSensitivity;

        Camera playerCamera      = m_playerMotor.mainCamera;
        playerCamera.fieldOfView = Camera.HorizontalToVerticalFieldOfView(UserSettings.fieldOfView, playerCamera.aspect);

        GameUI.instance.SetPlayer(m_playerMotor.GetComponent<Player>());

        GameUI.instance.DisableCountdown();

        m_yaw = transform.eulerAngles.y; //set yaw from initial rotation
    }

    void Update()
    {
        if (m_playerMotor.IsInputDisabled)
            return;

        m_forward  = Input.GetKey(KeyCode.W);
		m_backward = Input.GetKey(KeyCode.S);
		m_left     = Input.GetKey(KeyCode.A);
		m_right    = Input.GetKey(KeyCode.D);

        m_fire = Input.GetMouseButton(0); //left click

        m_jump = m_jump || Input.GetKeyDown(KeyCode.Space);
        m_dash = m_dash || Input.GetKeyDown(KeyCode.LeftShift);

        float axisX = Input.GetAxisRaw("Mouse X");
        float axisY = Input.GetAxisRaw("Mouse Y");

        cameraController.UpdateMouseInput(Time.fixedDeltaTime, axisX, axisY, ref m_yaw, ref m_pitch);
    }

    void FixedUpdate()
    {
        if (m_playerMotor.IsInputDisabled)
            return;

        m_playerMotor.Move(Time.fixedDeltaTime, m_forward, m_backward, m_left, m_right, m_jump, m_dash, m_yaw);

        cameraController.UpdateRotation(m_pitch);

        //reset one shot inputs
        m_jump = false;
        m_dash = false;

        if (m_fire)
        {
            activeWeapon.FireWeapon(null);
        }
    }
}
