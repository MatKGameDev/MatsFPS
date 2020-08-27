using System.Collections;
using UnityEngine;
using Bolt;
using Boo.Lang;
using UnityEditor;

[BoltGlobalBehaviour]
public class NetworkCallbacks : GlobalEventListener
{
    List<string> m_logMessages = new List<string>();

    public override void SceneLoadLocalDone(string scene)
    {

    }

    //public override void OnEvent(LogEvent evt)
    //{
    //    m_logMessages.Insert(0, evt.Message);
    //}

    //void OnGUI()
    //{
    //    // only display max the 5 latest log messages
    //    int maxMessages = Mathf.Min(5, m_logMessages.Count);

    //    //GUILayout.BeginArea(new Rect(Screen.width / 2 - 200, Screen.height - 100, 400, 100), GUI.skin.box);

    //    //for (int i = 0; i < maxMessages; ++i)
    //    //{
    //    //    GUILayout.Label(m_logMessages[i]);
    //    //}

    //    //GUILayout.EndArea();
    //}
}