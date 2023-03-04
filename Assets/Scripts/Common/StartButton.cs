using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartButton : MonoBehaviour
{

    public UnityEngine.Events.UnityEvent m_MyEvent;
    void Update()
    {
        if(Input.GetButtonDown("StartButton"))invokeEvent();
    }

    void invokeEvent()
    {
        m_MyEvent.Invoke();
    }
}
