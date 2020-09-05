﻿using Bolt.Matchmaking;
using Bolt;
using UnityEngine;
using UdpKit;
using System;
using UnityEngine.SceneManagement;

public class MainMenu : Bolt.GlobalEventListener
{
    public Canvas mainCanvas;

    private void Start()
    {
        GameState.instance.CurrentState = GameState.State.mainMenu;
    }

    public void StartServer()
    {
        BoltLauncher.StartServer();
    }

    public void StartClient()
    {
        BoltLauncher.StartClient();
    }

    public override void BoltStartDone()
    {
        if (BoltNetwork.IsServer)
        {
            string matchName = Guid.NewGuid().ToString();

            BoltMatchmaking.CreateSession(
                sessionID: matchName,
                sceneToLoad: "Gameplay"
                );
        }
    }

    public override void SessionListUpdated(Map<Guid, UdpSession> sessionList)
    {
        Debug.LogFormat("Session list updated: {0} total sessions", sessionList.Count);

        foreach (var session in sessionList)
        {
            UdpSession photonSession = session.Value as UdpSession;

            if (photonSession.Source == UdpSessionSource.Photon)
            {
                BoltMatchmaking.JoinSession(photonSession);
            }
        }
    }

    public void ShowSettings()
    {
        GameState.instance.CurrentState = GameState.State.mainSettings;

        mainCanvas.enabled = false;

        SettingsPopup.instance.Show();
    }

    public void ShowControls()
    {
        GameState.instance.CurrentState = GameState.State.mainControls;

        mainCanvas.enabled = false;

        ControlsPopup.instance.Show();
    }

    public void ShowMainMenu()
    {
        UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(null); //reset in case a button was previously selected

        SettingsPopup.instance.Hide();
        ControlsPopup.instance.Hide();

        mainCanvas.enabled = true;
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
