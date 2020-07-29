using UnityEngine;

[RequireComponent(typeof(Health))]
public class TargetDummy : MonoBehaviour
{
    [SerializeField]
    Color highHealthColor;

    [SerializeField]
    Color lowHealthColor;

    Health m_health;

    const float LOW_HEALTH_THRESHOLD = 10f;
    const float RESPAWN_TIME         = 1f;

    MeshRenderer m_MeshRenderer;

    // Start is called before the first frame update
    void Start()
    {
        m_MeshRenderer = GetComponent<MeshRenderer>();
        m_health       = GetComponent<Health>();

        m_health.onDamaged += OnDamaged;
        m_health.onDie     += OnDie;
    }

    // Update is called once per frame
    void Update()
    {
        SetColorBasedOnHealth();
    }

    void OnDamaged(float a_damageAmount)
    {
        SetColorBasedOnHealth();
    }

    void OnDie()
    {
        gameObject.SetActive(false);
        Invoke("RespawnTargetDummy", RESPAWN_TIME);
    }

    void RespawnTargetDummy()
    {
        gameObject.SetActive(true);
        m_health.currentHealth = m_health.maxHealth;
    }

    void SetColorBasedOnHealth()
    {
        if (m_health.currentHealth > LOW_HEALTH_THRESHOLD)
            m_MeshRenderer.material.color = highHealthColor;
        else
            m_MeshRenderer.material.color = lowHealthColor;
    }
}
