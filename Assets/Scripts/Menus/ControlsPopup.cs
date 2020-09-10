using UnityEngine;

public class ControlsPopup : BoltSingletonPrefab<ControlsPopup>
{
    public Canvas mainCanvas;

    public void Show()
    {
        mainCanvas.enabled = true;
    }

    public void Hide()
    {
        mainCanvas.enabled = false;
    }

    public void Back()
    {
        GameState.instance.HandleStateExit();
    }
}
