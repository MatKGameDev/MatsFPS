using UnityEngine;
using UnityEngine.UI;

public class DashIndicator : MonoBehaviour
{
    [SerializeField] 
    Sprite activeSprite;

    [SerializeField] 
    Sprite notActiveSprite;

    PlayerMotor m_player;

    Image m_image;

    public void SetPlayer(PlayerMotor a_player)
    {
        m_player = a_player;
    }

    // Start is called before the first frame update
    void Start()
    {
        m_image = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        if (m_player)
        {
            if (m_player.dashCooldownCountdown < 0f)
                m_image.sprite = activeSprite;
            else
                m_image.sprite = notActiveSprite;
        }
    }
}
