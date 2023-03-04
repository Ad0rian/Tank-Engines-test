using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadEffect : MonoBehaviour
{

    public Animator Effect;
    public string NameEffect;
    public bool onStart;

    void Start()
    {
        if(onStart)
        {
            Effect.SetTrigger(NameEffect);
        }
    }

    public void LoadEffectAnim()
    {
        Effect.SetTrigger(NameEffect);
    }
    public void LoadHud()
    {
        
        GameObject.Find("Intro").GetComponent<GenerateScene>().startgame();
    }
}
