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

    float m_firingCooldownCountdown;

    int m_bulletTrailLayerNumFPP;
    int m_bulletTrailLayerNumTPP;

    // Start is called before the first frame update
    void Start()
    {
        m_bulletTrailLayerNumFPP = (int)Mathf.Log(bulletTrailLayerMaskFPP.value, 2); //determine layer based on layermask
        m_bulletTrailLayerNumTPP = (int)Mathf.Log(bulletTrailLayerMaskTPP.value, 2); //determine layer based on layermask
    }

    // Update is called once per frame
    void Update()
    {
        m_firingCooldownCountdown -= Time.deltaTime;

        if (Input.GetMouseButton(0)) //left click
            FireWeapon();
    }

    void FireWeapon()
    {
        if (m_firingCooldownCountdown > 0.0f)
            return;

        animatorFPP.Play("Fire");
        animatorTPP.Play("Fire");

        m_firingCooldownCountdown = firingCooldown;

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
        Health objectHitHealth;

        //try to find a health component
        if (!a_hitObject.TryGetComponent<Health>(out objectHitHealth))
        {
            GameObject objectWithHealth = MyHelper.FindFirstParentWithComponent(a_hitObject, typeof(Health)); //go up the hierarchy and see if any parent has a health component
            if (objectWithHealth)
                objectHitHealth = objectWithHealth.GetComponent<Health>();
        }

        //if the object hit has health, deal damage
        if (objectHitHealth)
        {
            float damageToInflict = damagePerBullet;
            //check for headshot
            if (a_hitObject.TryGetComponent<Head>(out var playerHead))
                damageToInflict *= headshotMultiplier;

            objectHitHealth.TakeDamage(damageToInflict);
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
