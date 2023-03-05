using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FillerpositionSpawn;
using ObjectiveScene;

public class Hitbox : MonoBehaviour
{
    //Object to collide.
    public string tagCollide;
    //Where place will spawn.
    public string tagRespawn;
    Fillerposition Spawn;
    //Update objective.
    public Objectives ObjectiveUpdate;
    //PlayerNumber P1 or P2.
    public int playerint;
    //Set events will happen in the collision.
    public UnityEngine.Events.UnityEvent En_MyEvent;

    void Start()
    {
        //Set spawnpoint and objective.

        Spawn = GameObject.FindWithTag(tagRespawn).GetComponent<Fillerposition>();
        ObjectiveUpdate = GameObject.FindWithTag("objectivesgame").GetComponent<Objectives>();
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        //When collission happens.

        if (collision.tag.Equals(tagCollide))
        {
            Spawn.RecolocateElement();
            ObjectiveUpdate.UpdateObjective(playerint);
           
            En_MyEvent.Invoke();   
        }
    }

    public void DestroyEntity()
    {
        //Destroy object.
        
        Destroy(gameObject);
    }
}
