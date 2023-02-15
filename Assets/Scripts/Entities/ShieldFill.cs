using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldFill : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
        if (weapon)
        {
            weapon.AddShield();
            Destroy(gameObject);
        }
    } 
}