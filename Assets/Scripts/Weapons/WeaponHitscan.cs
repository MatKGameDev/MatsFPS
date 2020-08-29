using UnityEngine;

public class WeaponHitscan : MonoBehaviour
{
    [Header("Gun")]
    [SerializeField] private float firingCooldown;

    [SerializeField] private Transform muzzleTransformFPP;
    [SerializeField] private Transform muzzleTransformTPP;

    [Header("Bullet")]
    [SerializeField] private float     damagePerBullet;
    [SerializeField] private float     headshotMultiplier;
    [SerializeField] private float     range;
    [SerializeField] private LayerMask layersToIgnore;

    [Header("Bullet Trail")]
    [SerializeField] private float        bulletTrailLifetime;

    [SerializeField] private LineRenderer bulletTrailFPP;
    [SerializeField] private LayerMask    bulletTrailLayerMaskFPP;

    [SerializeField] private LineRenderer bulletTrailTPP;
    [SerializeField] private LayerMask    bulletTrailLayerMaskTPP;

    [Header("Animation")]
    [SerializeField] private Animator animatorFPP;
    [SerializeField] private Animator animatorTPP;

    [Header("Cameras")]
    [SerializeField] private Camera mainCamera;
    [SerializeField] private Camera weaponCamera;

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

    public void FireWeapon()
    {
        if (m_lastTimeFired + firingCooldown > Time.time)
            return;

        m_lastTimeFired = Time.time;

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
            DrawBulletTrail(muzzleWorldPosFPP, bulletTrailEndPos, bulletTrailFPP, m_bulletTrailLayerNumFPP);

        //spawn third person bullet trail
        if (bulletTrailTPP)
            DrawBulletTrail(muzzleTransformTPP.position, bulletTrailEndPos, bulletTrailTPP, m_bulletTrailLayerNumTPP);
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
                damageToInflict *= headshotMultiplier;

            //send player hit event
            var playerHitEvt = PlayerHitEvent.Create(Bolt.GlobalTargets.OnlyServer ,Bolt.ReliabilityModes.ReliableOrdered);

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

    void DrawBulletTrail(Vector3 a_startPos, Vector3 a_endPos, LineRenderer a_bulletTrailLR, int a_bulletTrailLayer)
    {
        GameObject bulletTrailGO = Instantiate(a_bulletTrailLR.gameObject, a_startPos, Quaternion.identity);

        LineRenderer bulletTrailLR = bulletTrailGO.GetComponent<LineRenderer>();

        bulletTrailLR.positionCount = 3;

        bulletTrailLR.SetPosition(0, a_startPos);
        bulletTrailLR.SetPosition(1, a_startPos + ((a_endPos - a_startPos) / 2f)); //halfway point
        bulletTrailLR.SetPosition(2, a_endPos);

        bulletTrailGO.layer = a_bulletTrailLayer;

        GameObject.Destroy(bulletTrailGO, bulletTrailLifetime);
    }
}
