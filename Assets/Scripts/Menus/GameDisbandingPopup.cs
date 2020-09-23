using UnityEngine;
using TMPro;

public class GameDisbandingPopup : BoltSingletonPrefab<GameDisbandingPopup>
{
    [SerializeField] Canvas   mainCanvas;
    [SerializeField] float    countdownDuration;
    [SerializeField] TMP_Text countdownDisplay;

    float m_disbandingCountdown;

    // Update is called once per frame
    void Update()
    {
        if (m_disbandingCountdown > 0f)
        {
            foreach (Player player in Player.s_playersList)
            {
                player.DisablePlayerControl();
            }

            GameUI.instance.ShowScoreboard();

            m_disbandingCountdown -= Time.deltaTime;

            countdownDisplay.text = Mathf.CeilToInt(m_disbandingCountdown).ToString();

            if (m_disbandingCountdown <= 0f)
            {
                mainCanvas.gameObject.SetActive(false);
                GameState.instance.TransitionToMainMenu();
            }
            else
            {
                GameState.instance.TransitionToGameplay();
            }
        }
    }

    public void StartCountdown()
    {
        Debug.Log("DISBANDING");
        m_disbandingCountdown = countdownDuration;

        mainCanvas.gameObject.SetActive(true);
    }
}
