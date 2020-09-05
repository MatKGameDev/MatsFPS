using UnityEngine;

public static class UserSettings
{
    public static float mouseSensitivity = PlayerPrefs.GetFloat("MouseSensitivity", 100f);
    public static int   fieldOfView      = PlayerPrefs.GetInt  ("FieldOfView",      90);
    public static int   volume           = PlayerPrefs.GetInt  ("Volume",           80);
    public static bool  isFullscreen     = PlayerPrefs.GetInt  ("IsFullscreen") == 1 ? true : false;
}