using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameUI : BoltSingletonPrefab<GameUI>
{
    public DashIndicator dashIndicator;

    public TMP_Text healthDisplay;

    public void SetPlayer(PlayerMotor a_player)
    {
        dashIndicator.SetPlayer(a_player);
    }

    public void SetHealth(float a_newHealth)
    {
        int healthDisplayValue = Mathf.CeilToInt(a_newHealth);
        healthDisplay.text     = healthDisplayValue.ToString();
    }
}
