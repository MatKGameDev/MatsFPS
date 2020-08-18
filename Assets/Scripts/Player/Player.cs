using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : Bolt.EntityBehaviour<IPlayerStateFPS>
{
    public int playerNum;

    Health m_health;

    const float RESPAWN_TIME = 1f;

    public override void Attached()
    {
        m_health = GetComponent<Health>();

        m_health.onDamaged += OnDamaged;
        m_health.onDie     += OnDie;

        if (entity.IsOwner)
            state.Health = m_health.currentHealth;
    }

    // Update is called once per frame
    //void Update()
    //{

    //}

    void OnDamaged(float a_damageAmount)
    {
        if (!entity.IsOwner)
            return;

        m_health.currentHealth -= a_damageAmount;
        m_health.currentHealth = Mathf.Clamp(m_health.currentHealth, 0f, m_health.maxHealth);

        state.Health = m_health.currentHealth;
    }

    void OnDie()
    {
        if (!entity.IsOwner)
            return;
        //gameObject.SetActive(false);
        //Invoke("RespawnPlayer", RESPAWN_TIME);
        RespawnPlayer();
    }

    void RespawnPlayer()
    {
        transform.position = new Vector3(0f, 1.7f, -3f);
        m_health.currentHealth = m_health.maxHealth;
    }
}