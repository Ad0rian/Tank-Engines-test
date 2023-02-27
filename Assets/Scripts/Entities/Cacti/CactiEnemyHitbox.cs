using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FillerpositionSpawn;
using ObjectiveScene;

public class CactiEnemyHitbox : MonoBehaviour
{
    public string tagCollide;
    public UnityEngine.Events.UnityEvent En_MyEvent;
    public Fillerposition EnemySpawn;
    public Objectives ObjectiveUpdate;

    void Start()
    {
        EnemySpawn = GameObject.FindWithTag("entitylocation").GetComponent<Fillerposition>();
        ObjectiveUpdate = GameObject.FindWithTag("objectivesolo").GetComponent<Objectives>();
    }

    
    void OnTriggerEnter2D(Collider2D collision){
        if (collision.tag.Equals(tagCollide))
        {
            EnemySpawn.RecolocateElement();
            Debug.Log("update");
            ObjectiveUpdate.UpdateObjective();
           
            En_MyEvent.Invoke();   
        }
    }
}
