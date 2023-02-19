using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public string tagCollide;
    public string tagCollidePlayer;
   public UnityEngine.Events.UnityEvent En_MyEvent;

    void OnTriggerEnter2D(Collider2D collision){
        if (collision.gameObject.tag.Equals(tagCollide) || collision.gameObject.tag.Equals(tagCollidePlayer)){
            En_MyEvent.Invoke();
            
        }
    }
}
