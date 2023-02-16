using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadEffect : MonoBehaviour
{

    public Animator Effect;
    public string NameEffect;
    public bool onStart;
    // Start is called before the first frame update
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
}
