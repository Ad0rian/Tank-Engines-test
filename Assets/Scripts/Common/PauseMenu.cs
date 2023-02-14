using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PauseMenu : MonoBehaviour
{
    [SerializeField] private GameObject pauseMenuUI;
    [SerializeField] private bool isPaused;
    public UnityEngine.Events.UnityEvent m_MyEvent;
    public UnityEngine.Events.UnityEvent m_MyEventD;
    public GameObject selectedPauseButton;

    private void Update(){
        if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Vertical") !=0)
        {
            EventSystem.current.SetSelectedGameObject(selectedPauseButton);
        }
       
        if(Input.GetButtonDown("Pause") || Input.GetButtonDown("Cancel") && isPaused){
            isPaused = !isPaused;

        }


    if (isPaused)
    {

        ActivateMenu();
    }
    else
    {
        DeactivateMenu();
    }
    }

    void ActivateMenu()
    {
        if(!pauseMenuUI.activeInHierarchy)
        {
            AudioListener.pause = true;
            Time.timeScale =0;
            pauseMenuUI.SetActive(true);
            m_MyEvent.Invoke();
            EventSystem.current.SetSelectedGameObject(null);
            EventSystem.current.SetSelectedGameObject(selectedPauseButton);
        }

    }

    public void DeactivateMenu()
    {
        
        AudioListener.pause = false;
        Time.timeScale =1;
        pauseMenuUI.SetActive(false);
        isPaused = false;
        m_MyEventD.Invoke();
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(selectedPauseButton);
    }


}
