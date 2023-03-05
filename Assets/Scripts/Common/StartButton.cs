using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartButton : MonoBehaviour
{
    //Set the time transition animation will long before back to the menu.
    private bool startime = false;
    //Counter that will decrease.
    private float counterTime;
    
    void Start()
    {
        //Set counter timer.

        counterTime = 1.0f;
    }

    void Update()
    {
        //Press the button to return to the menu.

        if(Input.GetButtonDown("StartButton"))loadtransition();
        if (startime)
        {
            counterTime -= Time.deltaTime;
            if (counterTime <= 0.0f)timerEnded();
        }
    }
    
    void loadtransition()
    {
        //Start transition animation.

        GameObject.Find("CanvasTransition").GetComponent<Animator>().Play("closedTransition");
        startime = true;
    } 

    void timerEnded()
    {
        //Change to Main Menu.

        SceneManager.LoadScene(0);
    }


}
