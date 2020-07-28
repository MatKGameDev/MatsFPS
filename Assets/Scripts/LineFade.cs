using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineFade : MonoBehaviour
{
    [SerializeField] private float fadeSpeed = 10f;

    LineRenderer m_lineRenderer;

    Color m_startColor;
    Color m_endColor;

    // Start is called before the first frame update
    void Start()
    {
        m_lineRenderer = GetComponent<LineRenderer>();

        m_startColor = m_lineRenderer.startColor;
        m_endColor   = m_lineRenderer.endColor;
    }

    // Update is called once per frame
    void Update()
    {
        m_startColor.a = Mathf.Lerp(m_startColor.a, 0f,           Time.deltaTime * fadeSpeed);
        m_endColor.a   = Mathf.Lerp(0f,             m_endColor.a, Time.deltaTime * fadeSpeed);

        m_lineRenderer.startColor = m_startColor;
        m_lineRenderer.endColor   = m_endColor;
    }
}
