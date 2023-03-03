using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FillerpositionSpawn;
using ObjectiveScene;

public class hitbox : MonoBehaviour
{
    public string tagCollide;
    public string tagRespawn;
    public UnityEngine.Events.UnityEvent En_MyEvent;
    public Fillerposition Spawn;
    public Objectives ObjectiveUpdate;
    public int playerint;

    void Start()
    {
        Spawn = GameObject.FindWithTag(tagRespawn).GetComponent<Fillerposition>();
        ObjectiveUpdate = GameObject.FindWithTag("objectivesgame").GetComponent<Objectives>();
    }

    
    void OnTriggerEnter2D(Collider2D collision){
        if (collision.tag.Equals(tagCollide))
        {
            Spawn.RecolocateElement(); 
            Debug.Log("update");
            ObjectiveUpdate.UpdateObjective(playerint);
           
            En_MyEvent.Invoke();   
        }
    }
}
