using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    //Object tag to collide.
    public string tagCollide;
    //Player tag to collide.
    public string tagCollidePlayer;
    //Set events will happen in the collision.
    public UnityEngine.Events.UnityEvent En_MyEvent;

    void OnTriggerEnter2D(Collider2D collision)
    {
        //Actions to do when collide with tag.

        if (collision.gameObject.tag.Equals(tagCollide) || collision.gameObject.tag.Equals(tagCollidePlayer)){
            En_MyEvent.Invoke();
            
        }
    }

    public void DestroyBullet()
    {
        //Destroy the bullet.

        Destroy(gameObject);
    }
}
