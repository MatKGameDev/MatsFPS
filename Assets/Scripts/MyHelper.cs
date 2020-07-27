using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyHelper : MonoBehaviour
{
    public static GameObject FindFirstParentWithComponent(GameObject a_childObject, System.Type a_componentType)
    {
        Transform t = a_childObject.transform;
        while (t.parent != null)
        {
            if (t.parent.GetComponent(a_componentType))
                return t.parent.gameObject;

            t = t.parent.transform;
        }
        return null; // Could not find a parent with given component
    }
}
