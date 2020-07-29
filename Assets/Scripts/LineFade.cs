using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineFade : MonoBehaviour
{
    [SerializeField] private float fadeSpeed = 10f;

    LineRenderer m_lineRenderer;

    float m_lineStartAlpha = 1f;
    float m_lineMidAlpha   = 0f;
    float m_lineEndAlpha   = 0f;

    float m_interpolationParam = 0f;

    // Start is called before the first frame update
    void Start()
    {
        m_lineRenderer = GetComponent<LineRenderer>();

        Gradient gradient = new Gradient();
        gradient.SetKeys(
            new GradientColorKey[] { new GradientColorKey(Color.blue,       0f), new GradientColorKey(Color.blue,     1f), new GradientColorKey(Color.blue,     2f) },
            new GradientAlphaKey[] { new GradientAlphaKey(m_lineStartAlpha, 0f), new GradientAlphaKey(m_lineMidAlpha, 1f), new GradientAlphaKey(m_lineEndAlpha, 2f) }
        );
        m_lineRenderer.colorGradient = gradient;
    }

    // Update is called once per frame
    void Update()
    {
        m_interpolationParam += fadeSpeed * Time.deltaTime;

        m_lineStartAlpha = Mathf.Lerp(1f, 0f, m_interpolationParam * 4f);
        m_lineMidAlpha   = Mathf.Lerp(1f, 0f, m_interpolationParam * 2f);
        m_lineEndAlpha   = Mathf.Lerp(1f, 0f, m_interpolationParam);

        Gradient gradient = new Gradient();
        gradient.SetKeys(
            new GradientColorKey[] { new GradientColorKey(Color.blue,       0f), new GradientColorKey(Color.blue,     0.5f), new GradientColorKey(Color.blue,     1f) },
            new GradientAlphaKey[] { new GradientAlphaKey(m_lineStartAlpha, 0f), new GradientAlphaKey(m_lineMidAlpha, 0.5f), new GradientAlphaKey(m_lineEndAlpha, 1f) }
        );
        m_lineRenderer.colorGradient = gradient;
    }
}
