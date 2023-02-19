using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmmoFill : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent m_MyEvent;
    public int ammoAmount = 5;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
        if (weapon)
        {
            weapon.AddAmmo(ammoAmount);
            m_MyEvent.Invoke();
            Destroy(gameObject);
        }
    }


}
