using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmmoFill : MonoBehaviour
{

    public int ammoAmount = 1;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
        if (weapon)
        {
            weapon.AddAmmo(ammoAmount);
            Destroy(gameObject);
        }
    }
}
