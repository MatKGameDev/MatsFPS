using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;
using Bolt;

public class GameUI : BoltSingletonPrefab<GameUI>
{
    public enum HitmarkerType
    {
        regular,
        headshot
    }

    [Header("Dash")]
    public DashIndicator dashIndicator;

    [Header("Health")]
    public TMP_Text healthDisplay;

    [Header("Ping")]
    public GameObject pingDisplayParent;
    public TMP_Text   pingDisplay;

    [Header("Score")]
    public GameObject scoreDisplayParent;
    public TMP_Text   playerScoreDisplay;
    public TMP_Text   enemyScoreDisplay;

    [Header("Hitmarker")]
    public GameObject hitmarkerWhite;
    public GameObject hitmarkerRed;

    [SerializeField] float hitmarkerDurationActive;

    int playerScore;
    int enemyScore;

    public void SetPlayer(PlayerMotor a_player)
    {
        dashIndicator.SetPlayer(a_player);
    }

    public void SetHealth(float a_newHealth)
    {
        int healthDisplayValue = Mathf.CeilToInt(a_newHealth);
        healthDisplay.text     = healthDisplayValue.ToString();
    }

    public void EnableScoreboard()
    {
        pingDisplayParent .SetActive(true);
        scoreDisplayParent.SetActive(true);

        playerScoreDisplay.text = playerScore.ToString();
        enemyScoreDisplay .text = enemyScore .ToString();
    }

    public void DisableScoreboard()
    {
        pingDisplayParent .SetActive(false);
        scoreDisplayParent.SetActive(false);
    }

    public void SetPlayerScore(int a_newScore)
    {
        playerScore = a_newScore;

        if (playerScoreDisplay.IsActive())
            playerScoreDisplay.text = playerScore.ToString();
    }

    public void SetEnemyScore(int a_newScore)
    {
        enemyScore = a_newScore;

        if (enemyScoreDisplay.IsActive())
            enemyScoreDisplay.text = enemyScore.ToString();
    }

    public void SetPing(float a_ping)
    {
        if (pingDisplay.IsActive())
            pingDisplay.text = a_ping.ToString() + " ms";
    }

    public void ActivateHitmarker(HitmarkerType a_type)
    {
        if (a_type == HitmarkerType.regular)
            hitmarkerWhite.SetActive(true);
        else
            hitmarkerRed.SetActive(true);

        StartCoroutine(DisableHitmarker(a_type));
    }

    IEnumerator DisableHitmarker(HitmarkerType a_type)
    {
        yield return new WaitForSeconds(hitmarkerDurationActive);

        if (a_type == HitmarkerType.regular)
            hitmarkerWhite.SetActive(false);
        else
            hitmarkerRed.SetActive(false);
    }
}
