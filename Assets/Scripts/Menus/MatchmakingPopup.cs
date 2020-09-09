using TMPro;
using UnityEngine;
using Bolt.Matchmaking;

public class MatchmakingPopup : BoltSingletonPrefab<MatchmakingPopup>
{
    public Canvas mainCanvas;

    public TMP_Text timeOutCountdownDisplay;

    public float timeOutDuration;

    float m_timeOutCountdown;

    void Start()
    {

    }

    public void Show()
    {
        GameState.instance.CurrentState = GameState.State.matchmaking;

        gameObject.SetActive(true);
        mainCanvas.gameObject.SetActive(true);

        m_timeOutCountdown = timeOutDuration;
    }

    public void Hide()
    {
        mainCanvas.gameObject.SetActive(false);
        gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        m_timeOutCountdown -= Time.deltaTime;

        int timeOutInt = Mathf.RoundToInt(m_timeOutCountdown);
        timeOutCountdownDisplay.text = timeOutInt.ToString();

        
        if (!BoltNetwork.IsConnected || BoltMatchmaking.CurrentSession.ConnectionsCurrent != BoltMatchmaking.CurrentSession.ConnectionsMax)
        {
            if (m_timeOutCountdown < 0f)
            {
                BoltNetwork.Shutdown();
                GameState.instance.TransitionToMainMenu();
                return;
            }
        }
    }

    public void ExitToMainMenu()
    {
        GameState.instance.TransitionToMainMenu();
        Hide();
    }
}
