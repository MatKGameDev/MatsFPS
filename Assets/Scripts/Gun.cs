using UnityEditor.UIElements;
using UnityEngine;

public class Gun : MonoBehaviour
{
    [Header("Gun")]
    public float firingCooldown;
    public Camera cameraToFireFrom;
    public Transform muzzleTransform;

    [Header("Bullet")]
    public float damagePerBullet;
    public float range;
    public LayerMask layersToIgnore;

    [Header("Bullet Trail")]
    public LineRenderer bulletTrail;
    public LayerMask bulletTrailLayerMask;
    public float bulletTrailDurationVisible = 0.15f;

    Animator m_animator;

    float m_firingCooldownCountdown;

    int m_bulletTrailLayerNum;

    // Start is called before the first frame update
    void Start()
    {
        m_animator = GetComponent<Animator>();

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

        m_animator.Play("Fire");

        m_firingCooldownCountdown = firingCooldown;

        RaycastHit hit;
        if (Physics.Raycast(cameraToFireFrom.transform.position, cameraToFireFrom.transform.forward, out hit, range, ~layersToIgnore))
        {
            //if the hit was super close, the trail would look weird so don't draw it
            if (Vector3.Distance(muzzleTransform.position, hit.point) > 0.5f)
                DrawBulletTrail(muzzleTransform.position, hit.point); //draw bullet trail

            Health objectHitHealth;
            if (hit.transform.TryGetComponent<Health>(out objectHitHealth))
                objectHitHealth.TakeDamage(damagePerBullet);
        }
        else //no hit
        {
            Vector3 bulletEndPos = cameraToFireFrom.transform.position + (cameraToFireFrom.transform.forward * range);
            DrawBulletTrail(muzzleTransform.position, bulletEndPos);
        }
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
