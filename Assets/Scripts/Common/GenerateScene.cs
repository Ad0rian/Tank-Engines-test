using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateScene : MonoBehaviour
{   
    public UnityEngine.Events.UnityEvent m_MyEventsolo;
    public UnityEngine.Events.UnityEvent m_MyEventmulti;
    // Start is called before the first frame update
    void Start()
    {
        if (mode.gameMode == 0)
        {
            m_MyEventsolo.Invoke();
        }
        else if (mode.gameMode == 1)
        {
            m_MyEventmulti.Invoke();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
