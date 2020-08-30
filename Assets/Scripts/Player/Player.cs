using Bolt;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : Bolt.EntityEventListener<IPlayerStateFPS>
{
    public int   playerNum;
    public float maxHealth;

    const float RESPAWN_TIME = 1f;

    public override void Attached()
    {
        if (entity.IsOwner)
            state.Health = maxHealth;

        state.AddCallback("Health", HealthCallback);
    }

    void HealthCallback()
    {
        GameUI.instance.SetHealth(state.Health);
    }

    public void TakeDamage(float a_damageAmount)
    {
        state.Health -= a_damageAmount;
        state.Health =  Mathf.Clamp(state.Health, 0f, maxHealth);

        OnDamaged(a_damageAmount);

        if (state.Health <= 0f)
            OnDie();
    }

    void OnDamaged(float a_damageAmount)
    {


    }

    void OnDie()
    {
        RespawnPlayer();
    }

    void RespawnPlayer()
    {
        transform.position = new Vector3(0f, 1.7f, -3f);
        state.Health = maxHealth;
    }
}