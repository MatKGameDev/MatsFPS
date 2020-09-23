using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PausePopup : BoltSingletonPrefab<PausePopup>
{
    [Header("Canvas")]
    public Canvas mainCanvas;

    public void Show()
    {
        UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(null); //reset in case a button was previously pressed

        mainCanvas.enabled = true;
    }

    public void Hide()
    {
        UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(null); //reset in case a button was previously pressed

        mainCanvas.enabled = false;
    }

    public void ShowSettings()
    {
        mainCanvas.enabled = false;
        SettingsPopup.instance.Show();

        GameState.instance.CurrentState = GameState.State.pauseSettings;
    }

    public void ShowControls()
    {
        mainCanvas.enabled = false;
        ControlsPopup.instance.Show();

        GameState.instance.CurrentState = GameState.State.pauseControls;
    }

    public void ResumeGameplay()
    {
        GameState.instance.TransitionToGameplay();
    }

    public void LeaveGame()
    {
        GameState.instance.TransitionToMainMenu();
    }
}
