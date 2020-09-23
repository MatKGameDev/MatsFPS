using UnityEngine;

public static class UserSettings
{
    public static float mouseSensitivity = PlayerPrefs.GetFloat("MouseSensitivity", DEFAULT_MOUSE_SENSITIVITY);
    public static int   fieldOfView      = PlayerPrefs.GetInt  ("FieldOfView",      DEFAULT_FIELD_OF_VIEW);
    public static int   volume           = PlayerPrefs.GetInt  ("Volume",           DEFAULT_VOLUME);
    public static bool  isFullscreen     = PlayerPrefs.GetInt  ("IsFullscreen",     DEFAULT_IS_FULLSCREEN ? 1 : 0) == 1 ? true : false;

    public const float DEFAULT_MOUSE_SENSITIVITY = 100f;
    public const int   DEFAULT_FIELD_OF_VIEW     = 90;
    public const int   DEFAULT_VOLUME            = 80;
    public const bool  DEFAULT_IS_FULLSCREEN     = true;
}