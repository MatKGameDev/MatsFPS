using Bolt.Matchmaking;
using Bolt;
using UnityEngine;
using UdpKit;
using System;
using UnityEngine.SceneManagement;

public class MainMenu : Bolt.GlobalEventListener
{
    private void Start()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible   = true;
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

    public void LoadSettingsScene()
    {
        SceneManager.LoadScene("SettingsMenu");
    }
}
