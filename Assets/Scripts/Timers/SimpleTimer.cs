using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleTimer : MonoBehaviour
{
   //Set events will happen after the timer end.
   public UnityEngine.Events.UnityEvent m_MyEvent;
   //custom setting time.
   public float targetTime;
   //If the object will disable or not when the timer is 0.
   public bool deactivateObject = true;
   //If the time will start when script is enabled.
   public bool startertime = true;
   //If the object will destroy or not when the timer is 0.
   public bool destroyObject = false;
   //Counter that will decrease.
   private float counterTime;

   private void Start()
   {
      //Set Counter time.

      counterTime= targetTime;
   }

   void Update()
   {
      //Timer counter update.

      if (startertime)counterTime -= Time.deltaTime;
      if (counterTime <= 0.0f)timerEnded();
   }
   
   void timerEnded()
   {
      //Execute events when timer ends.
      
      counterTime= targetTime;
      m_MyEvent.Invoke();
      if (deactivateObject)gameObject.SetActive(false);
      if (destroyObject)Destroy(gameObject);
   }
}
