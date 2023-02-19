using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletTimer : MonoBehaviour
{
    public float targetTime;

    private float counterTime;

    private void Start()
   {
      counterTime= targetTime;
   }

    void Update(){
 
   counterTime -= Time.deltaTime;
   
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
