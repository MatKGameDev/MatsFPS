using UnityEngine;

public class WeaponHitscan : MonoBehaviour
{
    [Header("Gun")]
    [SerializeField] float firingCooldown;

    [SerializeField] Transform muzzleTransformFPP;
    [SerializeField] Transform muzzleTransformTPP;

    [Header("Bullet")]
    [SerializeField] float     damagePerBullet;
    [SerializeField] float     headshotMultiplier;
    [SerializeField] float     range;
    [SerializeField] LayerMask layersToIgnore;

    [Header("Bullet Trail")]
    [SerializeField] LineRenderer bulletTrailFPP;
    [SerializeField] LayerMask    bulletTrailLayerMaskFPP;

    [SerializeField] LineRenderer bulletTrailTPP;
    [SerializeField] LayerMask    bulletTrailLayerMaskTPP;

    [Header("Animation")]
    [SerializeField] Animator animatorFPP;
    [SerializeField] Animator animatorTPP;

    [Header("Sound")]
    [SerializeField] AudioSource audioSource;
    [SerializeField] AudioClip   firingSound;
    [SerializeField] AudioClip   bodyHitSound;
    [SerializeField] AudioClip   headshotSound;


    [Header("Cameras")]
    [SerializeField] Camera mainCamera;
    [SerializeField] Camera weaponCamera;

    static float s_bulletTrailLifetime = 0.7f;

    const float MIN_DISTANCE_FOR_BULLET_TRAIL = 0.5f;

    float m_lastTimeFired;

    int m_bulletTrailLayerNumFPP;
    int m_bulletTrailLayerNumTPP;

    void Awake()
    {
        m_bulletTrailLayerNumFPP = (int)Mathf.Log(bulletTrailLayerMaskFPP.value, 2); //determine layer based on layermask
        m_bulletTrailLayerNumTPP = (int)Mathf.Log(bulletTrailLayerMaskTPP.value, 2); //determine layer based on layermask

        m_lastTimeFired = -100f;
    }

    public void FireWeapon(BoltEntity a_playerFiringEntity)
    {
        if (m_lastTimeFired + firingCooldown > Time.time)
            return;

        m_lastTimeFired = Time.time;
        
        audioSource.PlayOneShot(firingSound, 0.5f);

        animatorFPP.Play("Fire");
        animatorTPP.Play("Fire");

        Vector3 bulletTrailEndPos;
        RaycastHit hit;
        if (Physics.Raycast(mainCamera.transform.position, mainCamera.transform.forward, out hit, range, ~layersToIgnore))
        {
            bulletTrailEndPos = hit.point;

            ProcessWeaponHit(hit.transform.gameObject);
        }
        else //no hit
        {
            bulletTrailEndPos = mainCamera.transform.position + (mainCamera.transform.forward * range);
        }

        Vector3 muzzleScreenPosFPP = weaponCamera.WorldToScreenPoint(muzzleTransformFPP.position);
        Vector3 muzzleWorldPosFPP  = mainCamera.  ScreenToWorldPoint(muzzleScreenPosFPP);

        //spawn first person bullet trail
        //if the hit was super close, the trail would look weird so don't draw it
        if (bulletTrailFPP && Vector3.Distance(muzzleTransformFPP.position, bulletTrailEndPos) > MIN_DISTANCE_FOR_BULLET_TRAIL)
            DrawBulletTrail(muzzleWorldPosFPP, bulletTrailEndPos, bulletTrailFPP.gameObject, m_bulletTrailLayerNumFPP);

        var bulletTrailPrefabIdTPP = bulletTrailTPP.gameObject.GetComponent<BoltEntity>().ModifySettings().prefabId;

        SendBulletFiredEvent(a_playerFiringEntity, muzzleTransformTPP.position, bulletTrailEndPos, bulletTrailPrefabIdTPP);

        //spawn third person bullet trail
        //if (bulletTrailTPP)
            //DrawBulletTrail(muzzleTransformTPP.position, bulletTrailEndPos, bulletTrailTPP.gameObject, m_bulletTrailLayerNumTPP);
    }

    void ProcessWeaponHit(GameObject a_hitObject)
    {
        Player hitPlayer = null;

        //try to find a player component
        if (!a_hitObject.TryGetComponent<Player>(out hitPlayer))
        {
            hitPlayer = a_hitObject.GetComponentInParent<Player>(); //try to get the component from parent
        }

        //if the object hit has a player component, deal damage
        if (hitPlayer)
        {
            float damageToInflict = damagePerBullet;
            //check for headshot
            if (a_hitObject.TryGetComponent<Head>(out var playerHead))
            {
                damageToInflict *= headshotMultiplier;

                GameUI.instance.ActivateHitmarker(GameUI.HitmarkerType.headshot);
                audioSource.PlayOneShot(headshotSound, 0.25f);
            }
            else
            {
                GameUI.instance.ActivateHitmarker(GameUI.HitmarkerType.regular);
                audioSource.PlayOneShot(bodyHitSound, 1f);
            }

            //send player hit event
            var playerHitEvt = PlayerHitEvent.Create(Bolt.GlobalTargets.Everyone, Bolt.ReliabilityModes.ReliableOrdered);

            playerHitEvt.PlayerHitNum    = hitPlayer.playerNum;
            playerHitEvt.DamageToInflict = damageToInflict;
            playerHitEvt.Send();

            return;
        }

        Health objectHitHealth;

        //try to find a health component
        if (a_hitObject.TryGetComponent<Health>(out objectHitHealth))
        {
            float damageToInflict = damagePerBullet;

            //check for headshot
            if (a_hitObject.TryGetComponent<Head>(out var head))
                damageToInflict *= headshotMultiplier;

            objectHitHealth.TakeDamage(damageToInflict);

            return;
        }
    }

    void SendBulletFiredEvent(BoltEntity a_playerFiringEntity, Vector3 a_startPos, Vector3 a_endPos, Bolt.PrefabId a_bulletTrailPrefabId)
    {
        var myEvent = PlayerHitscanFiredEvent.Create(a_playerFiringEntity, Bolt.EntityTargets.EveryoneExceptController);

        myEvent.BulletStartPos      = a_startPos;
        myEvent.BulletEndPos        = a_endPos;
        myEvent.BulletTrailPrefabId = a_bulletTrailPrefabId;
        myEvent.FiringSoundName     = firingSound.name;

        myEvent.Send();
    }

    public static void DrawBulletTrail(Vector3 a_startPos, Vector3 a_endPos, GameObject a_bulletTrailGO, int a_bulletTrailLayer = 0)
    {
        GameObject newBulletTrailGO = Instantiate(a_bulletTrailGO, a_startPos, Quaternion.identity);

        LineRenderer newBulletTrailLR = newBulletTrailGO.GetComponent<LineRenderer>();

        newBulletTrailLR.positionCount = 3;

        newBulletTrailLR.SetPosition(0, a_startPos);
        newBulletTrailLR.SetPosition(1, a_startPos + ((a_endPos - a_startPos) / 2f)); //halfway point
        newBulletTrailLR.SetPosition(2, a_endPos);

        newBulletTrailGO.layer = a_bulletTrailLayer;

        GameObject.Destroy(newBulletTrailGO, s_bulletTrailLifetime);
    }
}