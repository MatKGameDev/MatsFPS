using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsPopup : BoltSingletonPrefab<SettingsPopup>
{
    [Header("Mouse Sensitivity")]
    public Slider   mouseSensSlider;
    public TMP_Text mouseSensValueText;

    [Header("Field of View")]
    public Slider   fieldOfViewSlider;
    public TMP_Text fieldOfViewValueText;

    [Header("Fullscreen")]
    public Toggle fullscreenToggle;

    const float SENS_SCALE_FACTOR = 100f;

    void Start()
    {
        float displaySens = UserSettings.mouseSensitivity / SENS_SCALE_FACTOR;
        SetMouseSens(displaySens);

        SetFieldOfView(UserSettings.fieldOfView);

        SetFullscreen(UserSettings.isFullscreen);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
            SceneManager.LoadScene("MainMenu");
    }

    public void SetMouseSens(float a_newMouseSens)
    {
        UserSettings.mouseSensitivity = a_newMouseSens * SENS_SCALE_FACTOR;
        mouseSensSlider.value         = a_newMouseSens;
        mouseSensValueText.text       = a_newMouseSens.ToString("F2");
    }

    public void SetFieldOfView(float a_newFieldOfView)
    {
        int realNewFieldOfView    = (int)a_newFieldOfView;
        UserSettings.fieldOfView  = realNewFieldOfView;
        fieldOfViewSlider.value   = realNewFieldOfView;
        fieldOfViewValueText.text = realNewFieldOfView.ToString();
    }

    public void SetFullscreen(bool a_newFullscreen)
    {
        UserSettings.isFullscreen = a_newFullscreen;
        fullscreenToggle.isOn     = a_newFullscreen;

        Screen.fullScreen = a_newFullscreen;
    }

    private void OnEnable()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible   = true;
    }
}
