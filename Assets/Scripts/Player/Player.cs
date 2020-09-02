using Bolt;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class Player : Bolt.EntityEventListener<IPlayerStateFPS>
{
    [Header("General")]
    public int   playerNum;
    public float maxHealth;

    [Header("Audio")]
    public GameObject mainAudioSourcePrefab;

    [Header("On Hit Effect")]
    [SerializeField] [Range(0, 1)] float onHitVignetteSmoothness;
    [SerializeField] Color onHitVignetteColor;
    [SerializeField] float onHitVignetteFadeSpeed;

    const float RESPAWN_TIME = 1f;

    AudioSource m_dispondableAudioSource;

    Volume   postProcessVolume;
    Vignette vignette;

    float vignetteInitialSmoothness;
    Color vignetteInitialColor;
    float vignetteFadeParam = 1f;

    public override void Attached()
    {
        if (entity.IsOwner)
        {
            state.Health = maxHealth;
        }

        GameObject audioSourceGO = Instantiate(mainAudioSourcePrefab);
        audioSourceGO.name       = "DispondableAudioSource";

        m_dispondableAudioSource = audioSourceGO.GetComponent<AudioSource>();

        state.AddCallback("Health", HealthCallback);

        postProcessVolume = FindObjectOfType<Volume>();
        if (!postProcessVolume)
            throw new System.NullReferenceException(nameof(postProcessVolume));

        postProcessVolume.profile.TryGet(out vignette);

        vignetteInitialSmoothness = vignette.smoothness.value;
        vignetteInitialColor      = vignette.color.value;
    }

    public override void SimulateController()
    {
        if (vignetteFadeParam < 1f)
        {
            vignetteFadeParam += onHitVignetteFadeSpeed * BoltNetwork.FrameDeltaTime;

            vignette.smoothness.value = Mathf.Lerp(onHitVignetteSmoothness, vignetteInitialSmoothness, vignetteFadeParam);
            vignette.color     .value = Color.Lerp(onHitVignetteColor,      vignetteInitialColor,      vignetteFadeParam);
        }
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
        state.Health = Mathf.Clamp(state.Health, 0f, maxHealth);

        var damagedEvent         = PlayerDamagedEvent.Create(entity);
        damagedEvent.DamageTaken = a_damageAmount;
        damagedEvent.Send();

        if (state.Health <= 0f)
            OnDie();
    }

    void OnDamaged(float a_damageAmount)
    {
        if (entity.HasControl)
        {
            vignette.smoothness.value = onHitVignetteSmoothness;
            vignette.color.value = onHitVignetteColor;

            vignetteFadeParam = 0f;
        }
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

    public override void OnEvent(PlayerHitscanFiredEvent evnt)
    {
        var bulletTrail = BoltNetwork.Instantiate(evnt.BulletTrailPrefabId);
        WeaponHitscan.DrawBulletTrail(evnt.BulletStartPos, evnt.BulletEndPos, bulletTrail.gameObject);

        BoltNetwork.Destroy(bulletTrail);

        //firing sound effect
        m_dispondableAudioSource.transform.position = evnt.BulletStartPos;

        AudioClip clip = (AudioClip)Resources.Load("SoundFX/" + evnt.FiringSoundName);
        m_dispondableAudioSource.PlayOneShot(clip);
    }

    public override void OnEvent(PlayerDamagedEvent evnt)
    {
        OnDamaged(evnt.DamageTaken);
    }
}