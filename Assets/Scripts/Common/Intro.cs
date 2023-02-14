using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Intro : MonoBehaviour
{
    public GameObject selectedButton;

    public void Start()
    {
        EventSystem.current.SetSelectedGameObject(selectedButton);
        //Cursor.lockState = CursorLockMode.Locked; 
        //Cursor.visible = false;
    }
    private void Update(){
        if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Horizontal") !=0)
        {
            EventSystem.current.SetSelectedGameObject(selectedButton);
        }


}
}
