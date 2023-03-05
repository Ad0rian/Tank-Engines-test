using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadEffect : MonoBehaviour
{
    //Set the Animator of the effect object.
    public Animator Effect;
    //Set Name of the effect to play.
    public string NameEffect;
    //If will start the effect on start or not.
    public bool onStart;

    void Start()
    {
        //If onStart is true load the Effect.
        
        if(onStart)Effect.SetTrigger(NameEffect);
    }

    public void LoadEffectAnim()
    {
        //Set the Effect to play.

        Effect.SetTrigger(NameEffect);
    }

    public void LoadHud()
    {
        //Load the HUD and active the gameplay elements and UI.

        GameObject.Find("Intro").GetComponent<GenerateScene>().startgame();
    }
}
