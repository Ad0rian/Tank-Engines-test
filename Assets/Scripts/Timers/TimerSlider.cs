using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerSlider : MonoBehaviour
{
    public Tank2DShootSystem weapon;
    public UnityEngine.Events.UnityEvent m_MyEvent;
    public Slider timerSlider;
    public float targetTime;
    private float counterTime;

    private void Start()
   {
        RestartTimer();
   }

    void Update(){
 
   counterTime -= Time.deltaTime;
   timerSlider.value = counterTime;
   
   if (counterTime <= 0.0f)
   {
      timerEnded();
   }
   
   }
   
   void timerEnded()
   {
      m_MyEvent.Invoke();
      counterTime= targetTime;
      weapon.Speed();
      gameObject.SetActive(false);
   }

   public void RestartTimer()
   {
        timerSlider.maxValue = targetTime;
        timerSlider.value = targetTime;
        counterTime= targetTime;
   }
}
