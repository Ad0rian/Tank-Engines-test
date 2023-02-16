using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public string tagCollide;
   public UnityEngine.Events.UnityEvent En_MyEvent;

    void OnTriggerEnter2D(Collider2D collision){
        if (collision.gameObject.tag.Equals(tagCollide)){
            En_MyEvent.Invoke();
            
        }
    }
}
