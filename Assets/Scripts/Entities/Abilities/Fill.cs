using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ObjectiveScene;
using FillerpositionSpawn;

public class Fill : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent m_MyEvent;
    public int typeAbility;
    public int ammoAmount = 5;
    public Fillerposition AbilitySpawn;

    void Start()
    {
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
        Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
        if (weapon)
        {

            switch(typeAbility)
            {
                case 0:
                    AbilitySpawn.RecolocateElement();
                    weapon.AddAmmo(ammoAmount);
                    m_MyEvent.Invoke();
                    Destroy(gameObject);
                    break;

                case 1:
                    AbilitySpawn.RecolocateElement();
                    weapon.AddShield();
                    m_MyEvent.Invoke();
                    Destroy(gameObject);
                    break;

                case 2:
                    AbilitySpawn.RecolocateElement();
                    weapon.AddSpeed();
                    m_MyEvent.Invoke();
                    Destroy(gameObject);
                    break;
            }

        }
    }
}
