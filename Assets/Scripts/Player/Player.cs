using Bolt;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class Player : Bolt.EntityEventListener<IPlayerStateFPS>
{
    public static List<Player> s_playersList = new List<Player>();

    [Header("General")]
    public int playerNum;
    public float maxHealth;

    [Header("Audio")]
    public GameObject mainAudioSourcePrefab;

    [Header("On Hit Effect")]
    [SerializeField] [Range(0, 1)] float onHitVignetteIntensity;
    [SerializeField] [Range(0, 1)] float onHitVignetteSmoothness;
    [SerializeField] Color onHitVignetteColor;
    [SerializeField] float onHitVignetteFadeSpeed;

    [Header("On Death Effect")]
    [SerializeField] ParticleSystem playerExplodeEffect;

    AudioSource m_dispondableAudioSource;

    Volume m_postProcessVolume;
    Vignette m_vignette;

    float m_vignetteInitialIntensity;
    float m_vignetteInitialSmoothness;
    Color m_vignetteInitialColor;
    float m_vignetteFadeParam = 1f;

    static List<Vector3> s_spawnPositions;
    static List<Vector3> s_spawnRotations;

    PlayerController m_playerController;
    PlayerMotor m_playerMotor;

    int m_numRespawnTeleportFrames;

    public static void PopulatePlayersList()
    {
        s_playersList = new List<Player>();

        var allPlayers = FindObjectsOfType<Player>();

        foreach (Player player in allPlayers)
            s_playersList.Add(player);
    }

    public static Player GetPlayerFromPlayerNum(int a_playerNum)
    {
        foreach (Player player in s_playersList)
        {
            if (!player)
                continue;

            if (player.playerNum == a_playerNum)
                return player;
        }

        return null;
    }

    void Awake()
    {
        m_playerController = GetComponent<PlayerController>();
        m_playerMotor = GetComponent<PlayerMotor>();

        SetSpawnPositionsAndRotations();
    }
    public void EnablePlayerControl()
    {
        m_playerMotor.IsInputDisabled = false;
    }

    public void DisablePlayerControl()
    {
        m_playerMotor.IsInputDisabled = true;
    }

    public override void Attached()
    {
        if (entity.IsOwner)
        {
            state.Health = maxHealth;
        }

        GameObject audioSourceGO = Instantiate(mainAudioSourcePrefab);
        audioSourceGO.name = "DispondableAudioSource";

        m_dispondableAudioSource = audioSourceGO.GetComponent<AudioSource>();

        state.AddCallback("Health", HealthCallback);
        state.AddCallback("PlayerScore", PlayerScoreCallback);
        state.AddCallback("EnemyScore", EnemyScoreCallback);

        m_postProcessVolume = FindObjectOfType<Volume>();
        if (!m_postProcessVolume)
            throw new System.NullReferenceException(nameof(m_postProcessVolume));

        m_postProcessVolume.profile.TryGet(out m_vignette);

        m_vignetteInitialIntensity = m_vignette.intensity.value;
        m_vignetteInitialSmoothness = m_vignette.smoothness.value;
        m_vignetteInitialColor = m_vignette.color.value;
    }

    public override void SimulateController()
    {
        if (BoltNetwork.IsConnected && BoltNetwork.IsClient)
        {
            int pingToDisplay = Mathf.RoundToInt(BoltNetwork.Server.PingNetwork * 1000f);
            GameUI.instance.SetPing(pingToDisplay);
        }

        if (m_vignetteFadeParam < 1f)
        {
            m_vignetteFadeParam += onHitVignetteFadeSpeed * BoltNetwork.FrameDeltaTime;

            m_vignette.intensity.value  = Mathf.Lerp(onHitVignetteIntensity,  m_vignetteInitialIntensity,  m_vignetteFadeParam);
            m_vignette.smoothness.value = Mathf.Lerp(onHitVignetteSmoothness, m_vignetteInitialSmoothness, m_vignetteFadeParam);
            m_vignette.color.value      = Color.Lerp(onHitVignetteColor,      m_vignetteInitialColor,      m_vignetteFadeParam);
        }

        if (m_numRespawnTeleportFrames > 0)
        {
            state.SetTeleport(state.PlayerTransform);
            state.SetTeleport(state.CameraTransform);

            m_numRespawnTeleportFrames--;
        }
    }

    public override void SimulateOwner()
    {
        if (m_numRespawnTeleportFrames > 0)
        {
            state.SetTeleport(state.PlayerTransform);
            state.SetTeleport(state.CameraTransform);

            m_numRespawnTeleportFrames--;
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
        if (entity.IsOwner)
        {
            state.Health -= a_damageAmount;
            state.Health = Mathf.Clamp(state.Health, 0f, maxHealth);

            if (state.Health <= 0f)
            {
                var diedEvent = PlayerDiedEvent.Create(GlobalTargets.Everyone, ReliabilityModes.ReliableOrdered);
                diedEvent.DeadPlayerNum = playerNum;
                diedEvent.DeathPosition = transform.position;
                diedEvent.Send();
            }
        }

        OnDamaged(a_damageAmount);
    }

    void OnDamaged(float a_damageAmount)
    {
        if (entity.HasControl)
        {
            m_vignette.intensity.value = onHitVignetteIntensity;
            m_vignette.smoothness.value = onHitVignetteSmoothness;
            m_vignette.color.value = onHitVignetteColor;

            m_vignetteFadeParam = 0f;
        }
    }

    public void OnDie()
    {
        if (entity.IsOwner)
        {
            state.EnemyScore++;

            state.Health = maxHealth;
        }

        Respawn();
    }

    public void OnEnemyKilled(Vector3 a_deathPosition)
    {
        m_dispondableAudioSource.Stop(); //stop any enemy sound effect

        if (entity.HasControl)
        {
            GameObject deathEffectGO = Instantiate(playerExplodeEffect.gameObject, a_deathPosition, Quaternion.identity);
            Destroy(deathEffectGO, 1.2f);
        }

        if (entity.IsOwner)
        {
            state.PlayerScore++;
        }

        if (entity.HasControl)
        {
            GameUI.instance.ActivateKillPopup();
        }
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
        Destroy(muzzleFlashGO, 1.2f);

        //firing sound effect
        m_dispondableAudioSource.transform.position = evnt.BulletStartPos;

        AudioClip clip = (AudioClip)Resources.Load("SoundFX/" + evnt.FiringSoundName);
        if (clip)
            m_dispondableAudioSource.PlayOneShot(clip);
    }

    void SetSpawnPositionsAndRotations()
    {
        s_spawnPositions = new List<Vector3>();
        s_spawnRotations = new List<Vector3>();

        s_spawnPositions.Add(new Vector3(58f, 2.5f, -58f));
        s_spawnRotations.Add(new Vector3(0f, -47f, 0f));

        s_spawnPositions.Add(new Vector3(-58f, 2.5f, 58f));
        s_spawnRotations.Add(new Vector3(0f, 133f, 0f));

        s_spawnPositions.Add(new Vector3(58f, 2.5f, 58f));
        s_spawnRotations.Add(new Vector3(0f, -134.4f, 0f));

        s_spawnPositions.Add(new Vector3(-58f, 2.5f, -58f));
        s_spawnRotations.Add(new Vector3(0f, 44f, 0f));
    }

    public void Respawn(int a_spawnIndex = -1)
    {
        m_playerController.SetPitch(0f);

        if (!entity.IsOwner)
            return;

        if (a_spawnIndex != -1)
        {
            //spawn at the specified index
            state.SetTeleport(state.PlayerTransform);
            state.SetTeleport(state.CameraTransform);
            m_playerMotor.TeleportToPosition(s_spawnPositions[a_spawnIndex]);

            if (m_playerController)
            {
                m_playerController.SetPitch(0f);
                m_playerController.SetYaw  (s_spawnRotations[a_spawnIndex].y);
            }
        }
        else
        {
            state.SetTeleport(state.PlayerTransform);
            state.SetTeleport(state.CameraTransform);

            m_playerMotor.TeleportToPosition(s_spawnPositions[state.NextSpawnIndex]);

            m_playerController.SetPitch(0f);
            m_playerController.SetYaw  (s_spawnRotations[state.NextSpawnIndex].y);
        }

        state.NextSpawnIndex = Random.Range(0, s_spawnPositions.Count);

        m_numRespawnTeleportFrames = 130;
    }
}