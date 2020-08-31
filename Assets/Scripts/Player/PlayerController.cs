﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

public class PlayerController : Bolt.EntityEventListener<IPlayerStateFPS>
{
    public CameraControl cameraController;

    [SerializeField]
    WeaponHitscan activeWeapon;

    bool m_forward;
    bool m_backward;
    bool m_left;
    bool m_right;
    bool m_jump;
    bool m_dash;
    bool m_fire;

    float m_yaw;
    float m_pitch;

    PlayerMotor m_playerMotor;

    void Awake()
    {
        m_playerMotor = GetComponent<PlayerMotor>();
    }

    public override void Attached()
    {
        state.SetTransforms(state.PlayerTransform, transform);
        state.SetTransforms(state.CameraTransform, cameraController.transform);
    }

    // Update is called once per frame
    void Update()
    {
        PollKeysAndButtons();
        PollMousePos();

        if (entity.HasControl && Input.GetKeyDown(KeyCode.Escape))
            BoltNetwork.Shutdown();
    }

	void PollKeysAndButtons()
	{
		m_forward  = Input.GetKey(KeyCode.W);
		m_backward = Input.GetKey(KeyCode.S);
		m_left     = Input.GetKey(KeyCode.A);
		m_right    = Input.GetKey(KeyCode.D);

        m_fire = Input.GetMouseButton(0); //left click

        m_jump = m_jump || Input.GetKeyDown(KeyCode.Space);
		m_dash = m_dash || Input.GetKeyDown(KeyCode.LeftShift);
	}

    void PollMousePos()
    {
        float axisX = Input.GetAxisRaw("Mouse X");
        float axisY = Input.GetAxisRaw("Mouse Y");

        cameraController.UpdateMouseInput(axisX, axisY, ref m_yaw, ref m_pitch);
    }

	public override void SimulateController()
	{
		IPlayerCommandFPSInput input = PlayerCommandFPS.Create();

		input.Forward  = m_forward;
		input.Backward = m_backward;
		input.Left     = m_left;
		input.Right    = m_right;
		input.Jump     = m_jump;
		input.Dash     = m_dash;
        input.Fire     = m_fire;
        input.Yaw      = m_yaw;
        input.Pitch    = m_pitch;

		entity.QueueInput(input);

        //reset one shot inputs
        m_jump = false;
        m_dash = false;
	}

    public override void ExecuteCommand(Bolt.Command command, bool resetState)
    {
        PlayerCommandFPS cmd = (PlayerCommandFPS)command;

        if (resetState)
        {
            //we got a correction from the server, reset (this only runs on the client)
            m_playerMotor.SetState(cmd.Result.Position, cmd.Result.Velocity, cmd.Result.IsGrounded, cmd.Result.IsDoubleJumpAvailable, cmd.Result.DashDurationCountdown, cmd.Result.DashCooldownCountdown);
        }
        else
        {
            //apply movement (this runs on both server and client)
            PlayerMotor.MotorState motorState = m_playerMotor.Move(cmd.Input.Forward, cmd.Input.Backward, cmd.Input.Left, cmd.Input.Right, cmd.Input.Jump, cmd.Input.Dash, cmd.Input.Yaw);

            //apply camera rotation
            cameraController.UpdateRotation(cmd.Input.Pitch);

            //copy the motor state to the commands result (this gets sent back to the client)
            cmd.Result.Position              = motorState.position;
            cmd.Result.Velocity              = motorState.velocity;
            cmd.Result.IsGrounded            = motorState.isGrounded;
            cmd.Result.IsDoubleJumpAvailable = motorState.isDoubleJumpAvailable;
            cmd.Result.DashDurationCountdown = motorState.dashDurationCountdown;
            cmd.Result.DashCooldownCountdown = motorState.dashCooldownCountdown;

            if (cmd.IsFirstExecution)
            {
                //check if we're the one controlling this entity
                if (entity.HasControl)
                {
                    if (cmd.Input.Fire)
                        activeWeapon.FireWeapon(entity);


                }
            }
        }
    }
}