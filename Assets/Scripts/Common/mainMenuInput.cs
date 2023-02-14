using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class mainMenuInput : MonoBehaviour
{


    public Animator UITank;
    public Animator BGTank;
    public GameObject ButtonSolo;
    public GameObject ButtonMulti;
    public GameObject ButtonExit;
    public Animator PressedSolo;
    public Animator PressedMulti;
    public Animator PressedExit;


    public GameObject selectedButton;
    private bool solo;
    private bool multi;
    private bool exit;
    private bool soloBG;
    private bool multiBG;
    private bool exitBG;
    private bool pressedactionsolo;
    private bool pressedactionmulti;
    private bool pressedactionexit;

    public void Start()
    {
        EventSystem.current.SetSelectedGameObject(selectedButton);
        //Cursor.lockState = CursorLockMode.Locked; 
        //Cursor.visible = false;
    }

     void FixedUpdate()
    {
        BGTank.SetBool("soloBG", soloBG);
        BGTank.SetBool("multiBG", multiBG);
        BGTank.SetBool("exitBG", exitBG);
        UITank.SetBool("solo", solo);
        UITank.SetBool("multi", multi);
        UITank.SetBool("exit", exit);
        PressedSolo.SetBool("pressedaction", pressedactionsolo);
        PressedMulti.SetBool("pressedaction", pressedactionmulti);
        PressedExit.SetBool("pressedaction", pressedactionexit);
    }
    private void Update(){
        if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Horizontal") !=0)
        {
            EventSystem.current.SetSelectedGameObject(selectedButton);
            
        }
        if (EventSystem.current.currentSelectedGameObject == ButtonSolo)
        {
            solo = true;
            multi = false;
            exit = false;
            soloBG = true;
            multiBG = false;
            exitBG = false;
            pressedactionsolo = true;
            pressedactionmulti = false;
            pressedactionexit = false;
            
           // Debug.Log("solo");
        }
        if (EventSystem.current.currentSelectedGameObject == ButtonMulti)
        {
            solo = false;
            multi = true;
            exit = false;
            soloBG = false;
            multiBG = true;
            exitBG = false;           
            pressedactionsolo = false;
            pressedactionmulti = true;
            pressedactionexit = false;
            
           // Debug.Log("multi");
        }
        if (EventSystem.current.currentSelectedGameObject == ButtonExit)
        {
            
            solo = false;
            multi = false;
            exit = true;
            soloBG = false;
            multiBG = false;
            exitBG = true; 
            pressedactionsolo = false;
            pressedactionmulti = false;
            pressedactionexit = true;
           // Debug.Log("exit");
        }


}
}
