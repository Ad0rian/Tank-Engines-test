using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MenuIni : MonoBehaviour
{
    [SerializeField] private GameObject mainMenuUI;
    [SerializeField] private bool isMenu;
    public GameObject selectedButton;

    public void Start()
    {
        EventSystem.current.SetSelectedGameObject(selectedButton);
        //Cursor.lockState = CursorLockMode.Locked; 
        //Cursor.visible = false;
    }
    private void Update(){
        if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Vertical") !=0)
        {
            EventSystem.current.SetSelectedGameObject(selectedButton);
        }

    if (isMenu)
    {
        
        ActivateMainMenu();
    }
    else
    {
        DeactivateMainMenu();
    }
    }

    public void ActivateMainMenu()
    {
        mainMenuUI.SetActive(true);
        

    }

    public void DeactivateMainMenu()
    {
        mainMenuUI.SetActive(false);
        isMenu = false;


    }
}
