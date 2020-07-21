using UnityEngine;
using UnityEngine.UI;

public class DashIndicator : MonoBehaviour
{
    public PlayerControl player;

    [SerializeField] 
    Sprite activeSprite;

    [SerializeField] 
    Sprite notActiveSprite;

    private Image m_image;

    // Start is called before the first frame update
    void Start()
    {
        m_image = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        if (player.dashCooldownCountdown < 0f)
            m_image.sprite = activeSprite;
        else
            m_image.sprite = notActiveSprite;
    }
}
