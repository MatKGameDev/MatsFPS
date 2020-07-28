using UnityEditor.UIElements;
using UnityEngine;

public class Gun : MonoBehaviour
{
    [Header("Gun")]
    [SerializeField] private float     firingCooldown;
    [SerializeField] private Camera    cameraToFireFrom;
    [SerializeField] private Transform muzzleTransformFPP;

    [Header("Bullet")]
    [SerializeField] private float     damagePerBullet;
    [SerializeField] private float     range;
    [SerializeField] private LayerMask layersToIgnore;

    [Header("Bullet Trail")]
    [SerializeField] private LineRenderer bulletTrail;
    [SerializeField] private LayerMask    bulletTrailLayerMask;
    [SerializeField] private float        bulletTrailDurationVisible = 0.15f;

    [Header("Animation")]
    [SerializeField] private Animator animatorFPP;
    [SerializeField] private Animator animatorTPP;

    float m_firingCooldownCountdown;

    int m_bulletTrailLayerNum;

    // Start is called before the first frame update
    void Start()
    {
        m_bulletTrailLayerNum = (int)Mathf.Log(bulletTrailLayerMask.value, 2); //determine layer based on layermask
    }

    // Update is called once per frame
    void Update()
    {
        m_firingCooldownCountdown -= Time.deltaTime;

        if (Input.GetMouseButton(0)) //left click
            ShootGun();
    }

    void ShootGun()
    {
        if (m_firingCooldownCountdown > 0.0f)
            return;

        animatorFPP.Play("Fire");

        m_firingCooldownCountdown = firingCooldown;

        Vector3 bulletTrailEndPos;
        RaycastHit hit;
        if (Physics.Raycast(cameraToFireFrom.transform.position, cameraToFireFrom.transform.forward, out hit, range, ~layersToIgnore))
        {
            bulletTrailEndPos = hit.point;

            Health objectHitHealth;
            if (hit.transform.TryGetComponent<Health>(out objectHitHealth))
                objectHitHealth.TakeDamage(damagePerBullet);
        }
        else //no hit
        {
            bulletTrailEndPos = cameraToFireFrom.transform.position + (cameraToFireFrom.transform.forward * range);
        }

        //check if the bullet trail prefab exists
        //also if the hit was super close, the trail would look weird so don't draw it
        if (bulletTrail || Vector3.Distance(muzzleTransformFPP.position, hit.point) > 0.5f)
            DrawBulletTrail(muzzleTransformFPP.position, bulletTrailEndPos);
    }

    void DrawBulletTrail(Vector3 a_startPos, Vector3 a_endPos)
    {
        GameObject bulletTrailGO = Instantiate(bulletTrail.gameObject, a_startPos, Quaternion.identity);

        LineRenderer bulletTrailLR = bulletTrailGO.GetComponent<LineRenderer>();

        bulletTrailLR.SetPosition(0, a_startPos);
        bulletTrailLR.SetPosition(1, a_endPos);

        bulletTrailGO.layer = m_bulletTrailLayerNum;

        GameObject.Destroy(bulletTrailGO, bulletTrailDurationVisible);
    }
}
