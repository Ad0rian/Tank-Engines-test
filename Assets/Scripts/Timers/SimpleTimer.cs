using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleTimer : MonoBehaviour
{
    public UnityEngine.Events.UnityEvent m_MyEvent;
    public float targetTime;
    public bool deactivateObject = true;
    public bool startertime = true;
    public bool destroyObject = false;
    private float counterTime;

    private void Start()
   {
      counterTime= targetTime;
   }

   void Update()
   {
 
      if (startertime)counterTime -= Time.deltaTime;
      
      if (counterTime <= 0.0f)
      {
         timerEnded();
      }
   
   }
   
   void timerEnded()
   {
      counterTime= targetTime;
      m_MyEvent.Invoke();
      if (deactivateObject)gameObject.SetActive(false);
      if (destroyObject)Destroy(gameObject);
   }

   }
