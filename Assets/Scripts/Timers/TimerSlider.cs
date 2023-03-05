using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerSlider : MonoBehaviour
{
   //Set player shoot system script.
   public Tank2DShootSystem weapon;
   //Set events will happen after the timer end.
   public UnityEngine.Events.UnityEvent m_MyEvent;
   //Set the hud slider ability.
   public Slider timerSlider;
   //Custom setting time.
   public float targetTime;
   //Counter that will decrease.
   private float counterTime;

   private void Start()
   {
      RestartTimer();
   }

   void Update()
   {
      //Timer counter update.

      counterTime -= Time.deltaTime;
      timerSlider.value = counterTime;
      
      if (counterTime <= 0.0f)timerEnded();   
   }
   
   void timerEnded()
   {
      //Execute events when timer ends.

      m_MyEvent.Invoke();
      counterTime= targetTime;
      weapon.Speed();
      gameObject.SetActive(false);
   }

   public void RestartTimer()
   {
      //Restart slider value.
      
      timerSlider.maxValue = targetTime;
      timerSlider.value = targetTime;
      counterTime= targetTime;
   }
}
