using Bolt;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : Bolt.EntityEventListener<IPlayerStateFPS>
{
    public int   playerNum;
    public float maxHealth;

    public GameObject mainAudioSourcePrefab;

    const float RESPAWN_TIME = 1f;

    AudioSource m_dispondableAudioSource;

    public override void Attached()
    {
        if (entity.IsOwner)
        {
            state.Health = maxHealth;
        }

        GameObject audioSourceGO = GameObject.Instantiate(mainAudioSourcePrefab);
        audioSourceGO.name       = "DispondableAudioSource";

        m_dispondableAudioSource = audioSourceGO.GetComponent<AudioSource>();

        state.AddCallback("Health", HealthCallback);
    }

    void HealthCallback()
    {
        if (entity.HasControl)
        {
            GameUI.instance.SetHealth(state.Health);
        }
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

    public override void OnEvent(PlayerHitscanFiredEvent evt)
    {
        var bulletTrail = BoltNetwork.Instantiate(evt.BulletTrailPrefabId);
        WeaponHitscan.DrawBulletTrail(evt.BulletStartPos, evt.BulletEndPos, bulletTrail.gameObject);

        BoltNetwork.Destroy(bulletTrail);

        //firing sound effect
        m_dispondableAudioSource.transform.position = evt.BulletStartPos;

        AudioClip clip = (AudioClip)Resources.Load("SoundFX/" + evt.FiringSoundName);
        m_dispondableAudioSource.PlayOneShot(clip);
    }
}