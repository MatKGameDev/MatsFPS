using UnityEngine;
using UnityEngine.UI;

public class DashIndicator : MonoBehaviour
{
    public PlayerMotor player;

    [SerializeField]
    static GameObject prefab;

    [SerializeField] 
    Sprite activeSprite;

    [SerializeField] 
    Sprite notActiveSprite;

    private Image m_image;

    public static DashIndicator CreateDashIndicator(PlayerMotor a_player)
    {
        GameObject newGO = Instantiate(prefab);

        DashIndicator newDashIndicator = newGO.GetComponent<DashIndicator>();
        newDashIndicator.player = a_player;

        return newDashIndicator;
    }

    // Start is called before the first frame update
    void Start()
    {
        m_image = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!player)
        {
            player = FindObjectOfType<PlayerMotor>();
        }

        if (player)
        {
            if (player.dashCooldownCountdown < 0f)
                m_image.sprite = activeSprite;
            else
                m_image.sprite = notActiveSprite;
        }
    }
}
