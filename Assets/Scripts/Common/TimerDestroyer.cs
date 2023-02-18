using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerDestroyer : MonoBehaviour
{

    public float targetTime;
    private float counterTime;
    public bool startertime = false;

    private void Start()
   {
      counterTime= targetTime;
   }

    void Update(){
 
    if (startertime)counterTime -= Time.deltaTime;
   
    if (counterTime <= 0.0f)
    {
        timerEnded();
    }
   }
   
   void timerEnded()
   {
      Destroy(gameObject);
   }
}
