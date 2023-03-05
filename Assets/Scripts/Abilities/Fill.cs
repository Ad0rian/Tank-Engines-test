using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FillerpositionSpawn;

public class Fill : MonoBehaviour
{
    //Set events will happen in the collision.
    public UnityEngine.Events.UnityEvent m_MyEvent;
    //Set the ability to be acquired by the player.
    public int typeAbility;
    //Set the quantity of ammo the player will get.
    public int ammoAmount = 5;
    //Set the FillerpositionScript to be spawned.
    public Fillerposition AbilitySpawn;

    void Start()
    {
        //Set what type of ability is.

        switch(typeAbility)
        {
            case 0:
                AbilitySpawn = GameObject.FindWithTag("ammospawn").GetComponent<Fillerposition>();
                break;

            case 1:
                AbilitySpawn = GameObject.FindWithTag("shieldspawn").GetComponent<Fillerposition>();
                break;

            case 2:
                AbilitySpawn = GameObject.FindWithTag("speedspawn").GetComponent<Fillerposition>();
                break;
        }   
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Fill player with the respective element.

        Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
        if (weapon)
        {
            AbilitySpawn.RecolocateElement();
            switch(typeAbility)
            {
                case 0:
                    weapon.AddAmmo(ammoAmount);                 
                    break;

                case 1:
                    weapon.AddShield();
                    break;

                case 2:                    
                    weapon.AddSpeed();
                    break;
            }
            m_MyEvent.Invoke();
            Destroy(gameObject);
        }
    }
}
