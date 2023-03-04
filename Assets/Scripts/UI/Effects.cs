using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Effects : MonoBehaviour
{
    public string NameEffect;
    public GameObject fillerelement;
    public GameObject placeapparition;
    public bool startOnLoad = false;

    void Start()
    {
        if(startOnLoad)InstantiateEffect();
    }

    public void InstantiateEffect()
    {
        var instance = Instantiate(fillerelement, placeapparition.transform.position, Quaternion.identity);
        instance.GetComponent<SimpleTimer>().startertime = true;
        instance.GetComponent<Animator>().SetTrigger(NameEffect);
    }
}
