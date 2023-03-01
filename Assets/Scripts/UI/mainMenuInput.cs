using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class mainMenuInput : MonoBehaviour
{


    public Animator UITank, BGTank,PressedSolo ,PressedMulti ,PressedExit ;
    public GameObject ButtonSolo, ButtonMulti, ButtonExit, selectedButton;
    private bool solo, multi, exit, soloBG, multiBG, exitBG, pressedactionsolo, pressedactionmulti, pressedactionexit;

    public void Start()
    {
        EventSystem.current.SetSelectedGameObject(selectedButton);
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
        }

}
}
