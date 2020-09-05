using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsPopup : BoltSingletonPrefab<SettingsPopup>
{
    [Header("Canvas")]
    public Canvas mainCanvas;

    [Header("Mouse Sensitivity")]
    public Slider   mouseSensSlider;
    public TMP_Text mouseSensValueText;

    [Header("Field of View")]
    public Slider   fieldOfViewSlider;
    public TMP_Text fieldOfViewValueText;

    [Header("Volume")]
    public AudioMixer audioMixer;
    public Slider     volumeSlider;
    public TMP_Text   volumeValueText;

    [Header("Fullscreen")]
    public Toggle fullscreenToggle;

    const float SENS_SCALE_FACTOR = 100f;

    void Start()
    {
        LoadCurrentSettings();
    }

    public void Show()
    {
        mainCanvas.enabled = true;
        LoadCurrentSettings();
    }

    public void Hide()
    {
        mainCanvas.enabled = false;
    }

    void LoadCurrentSettings()
    {
        float displaySens = UserSettings.mouseSensitivity / SENS_SCALE_FACTOR;
        SetMouseSens(displaySens);

        SetFieldOfView(UserSettings.fieldOfView);

        SetVolume(UserSettings.volume);

        SetFullscreen(Screen.fullScreen);
    }

    public void SetMouseSens(float a_newMouseSens)
    {
        UserSettings.mouseSensitivity = a_newMouseSens * SENS_SCALE_FACTOR;
        mouseSensSlider.value         = a_newMouseSens;
        mouseSensValueText.text       = a_newMouseSens.ToString("F2");

        if (GameState.instance.CurrentState == GameState.State.pauseSettings)
        {
            PlayerMainCamera playerCam = FindObjectOfType<PlayerMainCamera>();
            if (!playerCam)
                return;

            CameraControl camControl    = playerCam.GetComponentInParent<CameraControl>();
            camControl.mouseSensitivity = UserSettings.mouseSensitivity;
        }
    }

    public void SetFieldOfView(float a_newFieldOfView)
    {
        int realNewFieldOfView = (int)a_newFieldOfView;

        UserSettings.fieldOfView  = realNewFieldOfView;
        fieldOfViewSlider.value   = realNewFieldOfView;
        fieldOfViewValueText.text = realNewFieldOfView.ToString();

        if (GameState.instance.CurrentState == GameState.State.pauseSettings)
        {
            PlayerMainCamera playerCam = FindObjectOfType<PlayerMainCamera>();
            if (!playerCam)
                return;

            Camera mainCam      = playerCam.GetComponent<Camera>();
            mainCam.fieldOfView = Camera.HorizontalToVerticalFieldOfView(UserSettings.fieldOfView, mainCam.aspect);
        }
    }

    public void SetVolume(float a_newVolume)
    {
        int realVolume = (int)a_newVolume;

        UserSettings.volume  = realVolume;
        volumeSlider.value   = realVolume;
        volumeValueText.text = realVolume.ToString();

        int convertedVolume = (int)(a_newVolume * 0.4f - 40f); //convert volume from range (0 to 100) to (-40 to 0)
        audioMixer.SetFloat("volume", convertedVolume);
    }

    public void SetFullscreen(bool a_newFullscreen)
    {
        UserSettings.isFullscreen = a_newFullscreen;
        fullscreenToggle.isOn     = a_newFullscreen;

        Screen.fullScreen = a_newFullscreen;
    }

    private void OnApplicationQuit()
    {
        PlayerPrefs.SetFloat("MouseSensitivity", UserSettings.mouseSensitivity);
        PlayerPrefs.SetInt  ("FieldOfView",      UserSettings.fieldOfView);
        PlayerPrefs.SetInt  ("Volume",           UserSettings.volume);
        PlayerPrefs.SetInt  ("IsFullscreen",     UserSettings.isFullscreen ? 1 : 0);
        PlayerPrefs.Save();
    }
}
