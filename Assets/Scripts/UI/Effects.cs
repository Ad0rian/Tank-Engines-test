using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Effects : MonoBehaviour
{
    //Set Name of the effect to play.
    public string NameEffect;
    //Set the element that have the animator.
    public GameObject fillerelement;
    //Set the place where effect will happen.
    public GameObject placeapparition;
    //If the Effect will happen in start or not.
    public bool startOnLoad = false;

    void Start()
    {
        //Instantiate Effect if startOnLoad is enabled.
        
        if(startOnLoad)InstantiateEffect();
    }

    public void InstantiateEffect()
    {
        //Play the effect.

        var instance = Instantiate(fillerelement, placeapparition.transform.position, Quaternion.identity);
        instance.GetComponent<SimpleTimer>().startertime = true;
        instance.GetComponent<Animator>().SetTrigger(NameEffect);
    }
}
