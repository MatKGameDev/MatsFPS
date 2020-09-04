using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameState : BoltSingletonPrefab<GameState>
{
    public enum State
    {
        mainMenu,
        loadScreen,
        mainSettings,
        gameplay,
        pauseMenu,
        pauseSettings
    }

    State m_currentState;
    public State CurrentState
    {
        get
        {
            return m_currentState;
        }

        set
        {
            if (value == State.gameplay)
            {
                Cursor.lockState = CursorLockMode.Locked;
                Cursor.visible   = false;
            }
            else
            {
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible   = true;
            }

            m_currentState = value;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
            HandleEscapePress();
    }

    void HandleEscapePress()
    {
        switch (CurrentState)
        {
            case State.mainSettings:
                TransitionToMainMenu();
                break;

            case State.gameplay:
                if (!GameUI.instance.IsScoreboardOpen())
                    TransitionToPauseMenu();
                break;

            case State.pauseMenu:
                TransitionToGameplay();
                break;

            case State.pauseSettings:
                TransitionToPauseMenu();
                break;
        }
    }

    public void TransitionToMainMenu()
    {
        if (CurrentState == State.mainSettings)
        {
            MainMenu menu = GameObject.FindObjectOfType<MainMenu>();
            menu.ShowMainMenu();
        }

        CurrentState = State.mainMenu;
    }

    public void TransitionToPauseMenu()
    {
        if (CurrentState == State.pauseSettings)
            SettingsPopup.instance.Hide();
        else if (CurrentState == State.gameplay)
        {
            PlayerMainCamera playerCam = FindObjectOfType<PlayerMainCamera>();
            if (playerCam)
            {
                GameObject       playerObject  = MyHelper.FindFirstParentWithComponent(playerCam.gameObject, typeof(PlayerMotor));
                PlayerController playerControl = playerObject.GetComponent<PlayerController>();

                playerControl.IsInputDisabled = true;
            }
        }

        PausePopup.instance.Show();

        CurrentState = State.pauseMenu;
    }

    public void TransitionToGameplay()
    {
        if (CurrentState == State.pauseMenu)
        {
            PausePopup.instance.Hide();

            PlayerMainCamera playerCam = FindObjectOfType<PlayerMainCamera>();
            if (playerCam)
            {
                GameObject       playerObject  = MyHelper.FindFirstParentWithComponent(playerCam.gameObject, typeof(PlayerMotor));
                PlayerController playerControl = playerObject.GetComponent<PlayerController>();

                playerControl.IsInputDisabled = false;
            }
        }

        CurrentState = State.gameplay;
    }
}