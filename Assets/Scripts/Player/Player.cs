using Bolt;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class Player : Bolt.EntityEventListener<IPlayerStateFPS>
{
    public static List<BoltEntity> s_playerEntityList;

    [Header("General")]
    public int   playerNum;
    public float maxHealth;

    [Header("Audio")]
    public GameObject mainAudioSourcePrefab;

    [Header("On Hit Effect")]
    [SerializeField] [Range(0, 1)] float onHitVignetteIntensity;
    [SerializeField] [Range(0, 1)] float onHitVignetteSmoothness;
    [SerializeField] Color onHitVignetteColor;
    [SerializeField] float onHitVignetteFadeSpeed;

    const float RESPAWN_TIME = 1f;

    AudioSource m_dispondableAudioSource;

    Volume   postProcessVolume;
    Vignette vignette;

    float vignetteInitialIntensity;
    float vignetteInitialSmoothness;
    Color vignetteInitialColor;
    float vignetteFadeParam = 1f;

    static List<Vector3> spawnPositions;
    static List<Vector3> spawnRotations;

    PlayerController m_playerController;

    void Awake()
    {
        s_playerEntityList = new List<BoltEntity>();
        SetSpawnPositionsAndRotations();
    }

    public override void Attached()
    {
        m_playerController = GetComponent<PlayerController>();

        if (entity.IsOwner)
        {
            state.Health = maxHealth;
        }

        GameObject audioSourceGO = Instantiate(mainAudioSourcePrefab);
        audioSourceGO.name       = "DispondableAudioSource";

        m_dispondableAudioSource = audioSourceGO.GetComponent<AudioSource>();

        state.AddCallback("Health",      HealthCallback);
        state.AddCallback("PlayerScore", PlayerScoreCallback);
        state.AddCallback("EnemyScore",  EnemyScoreCallback);

        postProcessVolume = FindObjectOfType<Volume>();
        if (!postProcessVolume)
            throw new System.NullReferenceException(nameof(postProcessVolume));

        postProcessVolume.profile.TryGet(out vignette);

        vignetteInitialIntensity  = vignette.intensity.value;
        vignetteInitialSmoothness = vignette.smoothness.value;
        vignetteInitialColor      = vignette.color.value;
    }

    public override void SimulateController()
    {
        if (BoltNetwork.IsConnected && BoltNetwork.IsClient)
        {
            int pingToDisplay = Mathf.RoundToInt(BoltNetwork.Server.PingNetwork * 1000f);
            GameUI.instance.SetPing(pingToDisplay);
        }

        if (vignetteFadeParam < 1f)
        {
            vignetteFadeParam += onHitVignetteFadeSpeed * BoltNetwork.FrameDeltaTime;

            vignette.intensity .value = Mathf.Lerp(onHitVignetteIntensity,  vignetteInitialIntensity,  vignetteFadeParam);
            vignette.smoothness.value = Mathf.Lerp(onHitVignetteSmoothness, vignetteInitialSmoothness, vignetteFadeParam);
            vignette.color     .value = Color.Lerp(onHitVignetteColor,      vignetteInitialColor,      vignetteFadeParam);
        }
    }

    void HealthCallback()
    {
        if (entity.HasControl)
            GameUI.instance.SetHealth(state.Health);
    }

    void PlayerScoreCallback()
    {
        if (entity.HasControl)
            GameUI.instance.SetPlayerScore(state.PlayerScore);
    }

    void EnemyScoreCallback()
    {
        if (entity.HasControl)
            GameUI.instance.SetEnemyScore(state.EnemyScore);
    }

    public void TakeDamage(float a_damageAmount)
    {
        state.Health -= a_damageAmount;
        state.Health = Mathf.Clamp(state.Health, 0f, maxHealth);

        var damagedEvent         = PlayerDamagedEvent.Create(entity);
        damagedEvent.DamageTaken = a_damageAmount;
        damagedEvent.Send();

        if (state.Health <= 0f)
        {
            var diedEvent           = PlayerDiedEvent.Create(GlobalTargets.Everyone, ReliabilityModes.ReliableOrdered);
            diedEvent.DeadPlayerNum = playerNum;
            diedEvent.Send();
        }
    }

    void OnDamaged(float a_damageAmount)
    {
        if (entity.HasControl)
        {
            vignette.intensity .value = onHitVignetteIntensity;
            vignette.smoothness.value = onHitVignetteSmoothness;
            vignette.color     .value = onHitVignetteColor;

            vignetteFadeParam = 0f;
        }
    }

    public void OnDie()
    {
        if (entity.IsOwner)
        {
            state.EnemyScore++;
        }

        Respawn();
    }

    public void OnEnemyKilled()
    {
        state.PlayerScore++;
    }



    public override void OnEvent(PlayerHitscanFiredEvent evnt)
    {
        if (evnt.FromSelf)
            return;

        if (evnt.WeaponOwner.TryGetComponent<PlayerController>(out var senderController))
        {
            senderController.activeWeapon.animatorTPP.Play("Fire");
        }

        var bulletTrail = BoltNetwork.Instantiate(evnt.BulletTrailPrefabId);
        WeaponHitscan.DrawBulletTrail(evnt.BulletStartPos, evnt.BulletEndPos, bulletTrail.gameObject);

        BoltNetwork.Destroy(bulletTrail);

        GameObject muzzleFlashResource = Resources.Load("Prefabs/VFX/" + evnt.MuzzleFlashEffectName) as GameObject;
        GameObject muzzleFlashGO       = Instantiate(muzzleFlashResource);
        if (muzzleFlashGO.TryGetComponent<ParticleSystem>(out var muzzleFlash))
        {
            muzzleFlashGO.transform.position = evnt.BulletStartPos;
            muzzleFlash.Play();
        }

        //firing sound effect
        m_dispondableAudioSource.transform.position = evnt.BulletStartPos;

        AudioClip clip = (AudioClip)Resources.Load("SoundFX/" + evnt.FiringSoundName);
        if (clip)
            m_dispondableAudioSource.PlayOneShot(clip);
    }

    public override void OnEvent(PlayerDamagedEvent evnt)
    {
        OnDamaged(evnt.DamageTaken);
    }

    void SetSpawnPositionsAndRotations()
    {
        spawnPositions = new List<Vector3>();
        spawnRotations = new List<Vector3>();

        spawnPositions.Add(new Vector3(58f, 2.1f, 58f));
        spawnRotations.Add(new Vector3(0f, -134.4f, 0f));

        spawnPositions.Add(new Vector3(58f, 2.1f, -58f));
        spawnRotations.Add(new Vector3(0f, -47f, 0f));

        spawnPositions.Add(new Vector3(-58f, 2.1f, -58f));
        spawnRotations.Add(new Vector3(0f, 44f, 0f));

        spawnPositions.Add(new Vector3(-58f, 2.1f, 58f));
        spawnRotations.Add(new Vector3(0f, 133f, 0f));
    }

    public void Respawn(int a_spawnIndex = -1)
    {
        state.Health = maxHealth;

        if (a_spawnIndex != -1)
        {
            //spawn at the specified index
            state.SetTeleport(state.PlayerTransform);
            state.SetTeleport(state.CameraTransform);
            transform.position = spawnPositions[a_spawnIndex];

            state.Yaw   = spawnRotations[a_spawnIndex].y;
            state.Pitch = 0f;
        }
        else
        {
            //spawn at a random index
            int newSpawnIndex = Random.Range(0, spawnPositions.Count);

            state.SetTeleport(state.PlayerTransform);
            state.SetTeleport(state.CameraTransform);
            transform.position = spawnPositions[newSpawnIndex];
            
            state.Yaw   = spawnRotations[newSpawnIndex].y;
            state.Pitch = 0f;
        }
    }
}