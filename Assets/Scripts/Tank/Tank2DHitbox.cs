using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tank2DHitbox : MonoBehaviour
{
    public string tagCollide;
    public UnityEngine.Events.UnityEvent En_MyEvent;

    void OnTriggerEnter2D(Collider2D collision){
        if (collision.tag.Equals(tagCollide)){
            En_MyEvent.Invoke();
        }
    }
}
