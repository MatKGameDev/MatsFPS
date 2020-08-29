using UnityEngine;
using Bolt;
using System;

public class PlayerMotor : MonoBehaviour
{
    [Header("Dashing")]
    [SerializeField] private float dashSpeed    = 30f;
    [SerializeField] private float dashDuration = 0.12f;
    [SerializeField] private float dashCooldown = 1f;

    [Header("General Movement")]
    [SerializeField] private float accelerationRate      = 70f;
    [SerializeField] private float decelerationRate      = 90f;
    [SerializeField] private float maxBasicMovementSpeed = 16f;

    [Header("Aerial Movement")]
    [SerializeField] private float jumpHeight       = 2.3f;
    [SerializeField] private float doubleJumpHeight = 1.8f;
    [SerializeField] private float gravityStrength  = 48f;
    [SerializeField] private float terminalVelocity = 55f;

    [Header("Ground Check")]
    [SerializeField] private Transform groundCheck;
    [SerializeField] private LayerMask groundMask;

    [Header("Camera")]
    [SerializeField] private Camera mainCamera;

    public struct MotorState
    {
        public Vector3 position;
        public Vector3 velocity;
        public bool    isGrounded;
        public bool    isDoubleJumpAvailable;
        public float   dashDurationCountdown;
        public float   dashCooldownCountdown;
    }

    public float dashCooldownCountdown { get; private set; }

    const float GROUND_CHECK_RADIUS = 0.5f;

    const float GROUNDED_VELOCITY_Y             = -2f;
    const float POST_UPWARDS_DASH_VELOCITY_Y    = 4.5f;
    const float POST_HORIZONTAL_DASH_VELOCITY_Y = 1f;

    const float COYOTE_TIME = 0.1f;

    const float SLOPE_RIDE_DISTANCE_LIMIT           = 5f;  //the max distance above a slope where the player can be considered to be "on" it
    const float SLOPE_RIDE_DOWNWARDS_FORCE_STRENGTH = 20f; //the strength of the downwards force applied to pull the player onto a slope that they're going down

    MotorState m_motorState;

    Vector3 m_velocity;

    Vector3 m_dashDir;

    CharacterController m_characterController;
    float               m_initialSlopeLimit;

    float m_dashDurationCountdown;

    float m_lastTimeGrounded;
    bool  m_isGrounded;
    bool  m_isDoubleJumpAvailabile;

    public Vector3 GetVelocity()
    {
        return m_velocity;
    }

    public bool IsGrounded()
    {
        return m_isGrounded;
    }

    public float GetGroundedVelocityY()
    {
        return GROUNDED_VELOCITY_Y;
    }

    public void OnControlGained()
    {
        mainCamera .gameObject.SetActive(true);
        groundCheck.gameObject.SetActive(true);
    }

    void Awake()
    {
        m_characterController = GetComponent<CharacterController>();
        m_initialSlopeLimit   = m_characterController.slopeLimit;

        m_isDoubleJumpAvailabile = true;

        m_motorState = new MotorState();
        m_motorState.position = transform.localPosition;
    }

    public void SetState(Vector3 a_position, Vector3 a_velocity, bool a_isGrounded, bool a_isDoubleJumpAvailable, float a_dashDurationCountdown, float a_dashCooldownCountdown)
    {
        //assign new state
        m_motorState.position              = a_position;
        m_motorState.velocity              = a_velocity;
        m_motorState.isGrounded            = a_isGrounded;
        m_motorState.isDoubleJumpAvailable = a_isDoubleJumpAvailable;
        m_motorState.dashDurationCountdown = a_dashDurationCountdown;
        m_motorState.dashCooldownCountdown = a_dashCooldownCountdown;

        //assign local position
        m_characterController.Move(a_position - transform.localPosition);
    }

    public MotorState Move(bool a_forward, bool a_backward, bool a_left, bool a_right, bool a_jump, bool a_dash, float a_yaw)
    {
        m_velocity               = m_motorState.velocity;
        m_isGrounded             = m_motorState.isGrounded;
        m_isDoubleJumpAvailabile = m_motorState.isDoubleJumpAvailable;
        m_dashDurationCountdown  = m_motorState.dashDurationCountdown;
        dashCooldownCountdown    = m_motorState.dashCooldownCountdown;

        transform.localRotation = Quaternion.Euler(0, a_yaw, 0);

        PerformGroundCheck();

        int verticalAxis = 0;
        verticalAxis += Convert.ToInt32(a_forward);
        verticalAxis -= Convert.ToInt32(a_backward);

        int horizontalAxis = 0;
        horizontalAxis += Convert.ToInt32(a_right);
        horizontalAxis -= Convert.ToInt32(a_left);

        //calculate movement direction
        Vector3 moveDir = transform.right   * horizontalAxis
                        + transform.forward * verticalAxis;

        //normalize movement
        if (moveDir.sqrMagnitude > 1f)
            moveDir = Vector3.Normalize(moveDir);

        ProcessBasicMovement(verticalAxis, horizontalAxis, moveDir);

        ApplyDeceleration(verticalAxis, horizontalAxis);

        //clamp magnitude of velocity on the xz plane
        Vector3 velocityXZ = new Vector3(m_velocity.x, 0f, m_velocity.z);
        velocityXZ = Vector3.ClampMagnitude(velocityXZ, maxBasicMovementSpeed);

        m_velocity = new Vector3(velocityXZ.x, m_velocity.y, velocityXZ.z);

        //if the player is moving upwards, increase slope limit so they dont get caught on objects
        m_characterController.slopeLimit = m_velocity.y > 0f ? 90f : m_initialSlopeLimit;

        m_isDoubleJumpAvailabile = m_isGrounded || m_isDoubleJumpAvailabile;

        m_velocity.y -= gravityStrength * BoltNetwork.FrameDeltaTime; //apply gravity

        //check if the player is grounded, in which case their downwards velocity should be reset
        if (m_isGrounded && m_velocity.y < 0f)
            m_velocity.y = GROUNDED_VELOCITY_Y; //don't set it to 0 else the player might float above the ground a bit

        PerformJumpLogic(a_jump);

        PerformDashLogic(a_dash, moveDir);

        m_velocity.y = Mathf.Max(m_velocity.y, -terminalVelocity); //clamp velocity if it's more than the terminal velocity

        //move the character based on the velocity after horizontal and vertical movement is applied
        m_characterController.Move(m_velocity * BoltNetwork.FrameDeltaTime);

        //after standard movement stuff is done, check if the player should be glued to a slope
        PerformOnSlopeLogic();

        m_motorState.position              = transform.localPosition;
        m_motorState.isGrounded            = m_isGrounded;
        m_motorState.velocity              = m_velocity;
        m_motorState.isDoubleJumpAvailable = m_isDoubleJumpAvailabile;
        m_motorState.dashDurationCountdown = m_dashDurationCountdown;
        m_motorState.dashCooldownCountdown = dashCooldownCountdown;

        return m_motorState;
    }

    void PerformGroundCheck()
    {
        //grounded check
        m_isGrounded = Physics.CheckSphere(groundCheck.position, GROUND_CHECK_RADIUS, groundMask);

        m_isGrounded = m_isGrounded || m_characterController.isGrounded;

        if (m_isGrounded)
            m_lastTimeGrounded = Time.time;
    }

    void ProcessBasicMovement(int a_verticalAxis, int a_horizontalAxis, Vector3 a_moveDir)
    {
        //apply basic movement
        m_velocity += a_moveDir * accelerationRate * BoltNetwork.FrameDeltaTime;
    }

    void ApplyDeceleration(int a_verticalAxis, int a_horizontalAxis)
    {
        //apply deceleration if the axis isn't being moved on
        float   frameIndependantDeceleration = decelerationRate * BoltNetwork.FrameDeltaTime;
        Vector3 localVelocity                = transform.InverseTransformDirection(m_velocity);

        if (a_verticalAxis == 0)
        {
            if (Mathf.Abs(localVelocity.z) > frameIndependantDeceleration)
                m_velocity -= transform.forward * Mathf.Sign(localVelocity.z) * frameIndependantDeceleration;
            else
                m_velocity -= transform.forward * localVelocity.z;
        }

        if (a_horizontalAxis == 0)
        {
            if (Mathf.Abs(localVelocity.x) > frameIndependantDeceleration)
                m_velocity -= transform.right * Mathf.Sign(localVelocity.x) * frameIndependantDeceleration;
            else
                m_velocity -= transform.right * localVelocity.x;
        }
    }

    void PerformJumpLogic(bool a_shouldJump)
    {
        if (a_shouldJump)
        {
            //first jump
            if (m_lastTimeGrounded + COYOTE_TIME >= Time.time)
                m_velocity.y = Mathf.Sqrt(jumpHeight * -2f * -gravityStrength); //formula to calculate velocity needed in order to reach desired jump height

            //double jump
            else if (m_isDoubleJumpAvailabile)
            {
                float jumpStrength = Mathf.Sqrt(doubleJumpHeight * -2f * -gravityStrength); //formula to calculate velocity needed in order to reach desired jump height

                //if the player is moving down, replace the current downwards velocity with the double jump velocity
                if (m_velocity.y < 0f)
                    m_velocity.y = jumpStrength;

                //player is moving up, take a fraction of the current y velocity and add the jump strength to it
                else
                {
                    m_velocity.y *= 0.3f;
                    m_velocity.y += jumpStrength;
                }

                m_isDoubleJumpAvailabile = false;
            }
        }
    }

    void PerformDashLogic(bool a_shouldDash, Vector3 a_moveDir)
    {
        if (a_shouldDash)
        {
            if (dashCooldownCountdown < 0f)
            {
                //dash up if no direction is input
                if (a_moveDir.sqrMagnitude < 0.7f)
                    m_dashDir = Vector3.up;

                //dash based on direction input
                else
                    m_dashDir = a_moveDir;

                //set character to dashing
                m_dashDurationCountdown = dashDuration;
                //set cooldown time
                dashCooldownCountdown = dashCooldown;
            }
        }

        //reduce dash cooldown timer
        dashCooldownCountdown -= BoltNetwork.FrameDeltaTime;

        //check if player is dashing
        if (m_dashDurationCountdown > 0f)
        {
            m_dashDurationCountdown -= BoltNetwork.FrameDeltaTime;

            m_velocity = m_dashDir * dashSpeed;

            //if dash is finished on this frame, reset vertical velocity
            if (m_dashDurationCountdown <= 0f)
            {
                if (m_dashDir == Vector3.up)
                    m_velocity.y = POST_UPWARDS_DASH_VELOCITY_Y; //add some velocity after an upwards dash to prevent jerkiness
                else
                    m_velocity.y = POST_HORIZONTAL_DASH_VELOCITY_Y;
            }
        }
    }

    //this function should be called AFTER standard movement is applied for the current update
    void PerformOnSlopeLogic()
    {
        //calculate new isGrounded since player movement was just updated
        bool wasGrounded   = m_isGrounded;
        bool newIsGrounded = Physics.CheckSphere(groundCheck.position, GROUND_CHECK_RADIUS, groundMask);

        //glue the player to the slope if they're moving down one (fixes bouncing when going down slopes)
        if (!newIsGrounded && wasGrounded && m_velocity.y < 0f)
        {
            Vector3 pointAtBottomOfPlayer = transform.position - (Vector3.down * m_characterController.height / 2f);

            RaycastHit hit;
            if (Physics.Raycast(pointAtBottomOfPlayer, Vector3.down, out hit, SLOPE_RIDE_DISTANCE_LIMIT))
                m_characterController.Move(Vector3.down * SLOPE_RIDE_DOWNWARDS_FORCE_STRENGTH * BoltNetwork.FrameDeltaTime);
        }
    }
}