using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FillerpositionSpawn
{
    public class Fillerposition : MonoBehaviour
    {
        //Set the place where the prefab will appear.
        public string tagposition;
        //Set what prefab will spawn.
        public GameObject fillerelement;
        //If the element to spawn is an enemy or not.
        public bool isEnemy = false;
        //If the element to spawn is a player or not.
        public bool isPlayer = false;
        //Bool to allow the spawn event or not.
        bool activaterelocation;
        //The different points where the element can spawn.
        GameObject[] spawnPoints;
        //The current point where the element will spawn.
        GameObject currentPoint;
        //The estimated time before an element is spawned.
        public float assignedTime = 5.0f;
        //Counter that will decrease.
        private float counterTime;
        //index of the target to be spawned.
        int index;

        void Start()
        {
            //Assign the first spawned elements to the setted positions.

            counterTime = assignedTime;
            spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
            index = Random.Range (0, spawnPoints.Length);
            
            if(!isPlayer) PositionLocation();
            if(isEnemy)firstPositionLocation(); 
            
        }

        void Update()
        {
            //Recolocate elements.

            if (activaterelocation)
            {
                counterTime -= Time.deltaTime;
                    if (counterTime <= 0.0f)
                    {
                        spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
                        index = Random.Range (0, spawnPoints.Length);
                        PositionLocation();
                    }
                }
            }

        void PositionLocation()
        {
            //Set the position the element will be have.

            currentPoint = spawnPoints[index];
            counterTime = assignedTime;
            activaterelocation = false;
            
            if(isPlayer) 
            {
                fillerelement.GetComponentInChildren<Tank2DShootSystem>().currentAmmo = 10;
                fillerelement.GetComponentInChildren<Tank2DShootSystem>().shieldStatus = false;
                fillerelement.GetComponentInChildren<Tank2DShootSystem>().speedStatus = false;
                fillerelement.GetComponentInChildren<Tank2DShootSystem>().UpdatingHUD();
                fillerelement.transform.position = currentPoint.transform.position;
                fillerelement.transform.rotation = currentPoint.transform.rotation;
            }
            else Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
            if(isEnemy)Destroy(currentPoint.gameObject);
        }

        void firstPositionLocation()
        {
            //Set the first position will have the enemies.

            for (int i = 0; i < 5; i++) 
            {
                spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
                index = Random.Range (0, spawnPoints.Length);
                currentPoint = spawnPoints[index];
                Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
                Destroy(currentPoint.gameObject);
            }
        }

        public void RecolocateElement()
        {
            activaterelocation = true;
        }
    }
}