using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameUI : BoltSingletonPrefab<GameUI>
{
    public DashIndicator dashIndicator;

    public void SetPlayer(PlayerMotor a_player)
    {
        dashIndicator.SetPlayer(a_player);
    }
}
