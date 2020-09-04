using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    public void ResumeGameplay()
    {
        GameState.instance.TransitionToGameplay();
    }

    public void LeaveGame()
    {
        BoltNetwork.Shutdown();
    }
}
