using UnityEngine;

public class Gun : MonoBehaviour
{
    public float damagePerBullet;
    public float range;
    public float firingCooldown;

    public Camera playerCamera;
    public Transform muzzleTransform;

    const float BULLET_TRAIL_VISIBLE_DURATION = 0.1f;

    float m_firingCooldownCountdown;

    // Start is called before the first frame update
    void Start()
    {

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

        m_firingCooldownCountdown = firingCooldown;

        RaycastHit hit;
        if (Physics.Raycast(playerCamera.transform.position, playerCamera.transform.forward, out hit, range))
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
            Vector3 bulletEndPos = playerCamera.transform.position + (playerCamera.transform.forward * range);
            DrawBulletTrail(muzzleTransform.position, bulletEndPos);
        }
    }

    void DrawBulletTrail(Vector3 a_startPos, Vector3 a_endPos)
    {
        GameObject myLine = new GameObject();
        myLine.name = "BulletTrail";

        myLine.transform.position = a_startPos;

        myLine.AddComponent<LineRenderer>();
        LineRenderer lr = myLine.GetComponent<LineRenderer>();

        lr.material = new Material(Shader.Find("Unlit/Texture"));

        lr.startWidth = 0.05f;
        lr.endWidth   = 0.05f;

        lr.SetPosition(0, a_startPos);
        lr.SetPosition(1, a_endPos);

        GameObject.Destroy(myLine, BULLET_TRAIL_VISIBLE_DURATION);
    }
}
