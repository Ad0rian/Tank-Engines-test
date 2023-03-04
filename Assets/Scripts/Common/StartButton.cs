using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartButton : MonoBehaviour
{
    private bool startime = false;
    private float counterTime;
    
    void Start()
    {
        counterTime = 1.0f;
    }

    void Update()
    {
        if(Input.GetButtonDown("StartButton"))loadtransition();
        if (startime)
        {
            counterTime -= Time.deltaTime;
            if (counterTime <= 0.0f)timerEnded();
        }
    }
    
     void loadtransition()
    {
        GameObject.Find("CanvasTransition").GetComponent<Animator>().Play("closedTransition");
        startime = true;
    } 

    void timerEnded()
    {
        SceneManager.LoadScene(0);
    }


}
