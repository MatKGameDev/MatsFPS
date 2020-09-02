using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class GameUI : BoltSingletonPrefab<GameUI>
{
    public enum HitmarkerType
    {
        regular,
        headshot
    }

    public DashIndicator dashIndicator;

    public TMP_Text healthDisplay;

    public GameObject hitmarkerWhite;
    public GameObject hitmarkerRed;

    [SerializeField] float hitmarkerDurationActive;

    public void SetPlayer(PlayerMotor a_player)
    {
        dashIndicator.SetPlayer(a_player);
    }

    public void SetHealth(float a_newHealth)
    {
        int healthDisplayValue = Mathf.CeilToInt(a_newHealth);
        healthDisplay.text     = healthDisplayValue.ToString();
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
