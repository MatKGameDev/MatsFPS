using Bolt.Matchmaking;
using UnityEngine;
using UdpKit;
using System;
using UnityEngine.SceneManagement;

public class MainMenu : Bolt.GlobalEventListener
{
    public Canvas mainCanvas;
    public Canvas playCanvas;

    void Start()
    {
        SettingsPopup.instance.Hide();

        GameState.instance.CurrentState = GameState.State.mainMenu;

        BoltNetwork.Shutdown(); //just in case bolt was running, shut it down
    }

    public void StartServer()
    {
        MatchmakingPopup.instance.Show();

        BoltLauncher.StartServer();
    }

    public void StartClient()
    {
        MatchmakingPopup.instance.Show();

        BoltLauncher.StartClient();
    }

    public void StartOfflineGame()
    {
        GameState.instance.CurrentState = GameState.State.gameplay;
        SceneManager.LoadScene("OfflinePractice");
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
                if (photonSession.ConnectionsCurrent == photonSession.ConnectionsMax)
                    continue;

                BoltMatchmaking.JoinSession(photonSession);
            }
        }
    }

    public void ShowSettings()
    {
        GameState.instance.CurrentState = GameState.State.mainSettings;

        mainCanvas.gameObject.SetActive(false);

        SettingsPopup.instance.Show();
    }

    public void ShowControls()
    {
        GameState.instance.CurrentState = GameState.State.mainControls;

        mainCanvas.gameObject.SetActive(false);

        ControlsPopup.instance.Show();
    }

    public void ShowMainMenu()
    {
        GameState.instance.CurrentState = GameState.State.mainMenu;

        UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(null); //reset in case a button was previously selected

        SettingsPopup.instance.Hide();
        ControlsPopup.instance.Hide();

        playCanvas.gameObject.SetActive(false);
        mainCanvas.gameObject.SetActive(true);
    }

    public void ShowPlayMenu()
    {
        GameState.instance.CurrentState = GameState.State.playMenu;

        UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(null); //reset in case a button was previously selected

        mainCanvas.gameObject.SetActive(false);
        playCanvas.gameObject.SetActive(true);
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
