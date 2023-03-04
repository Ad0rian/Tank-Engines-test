using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using UnityEngine.UI;
using Tank2DControllers;
using ObjectiveScene;
using FillerpositionSpawn;


public class GenerateScene : MonoBehaviour
{   
    public GameObject myTankP1, Enemies, cameraPlayer1, HUDP1, objectives , objectiveSHUD, scoreS, animationIntroS ;
    public GameObject myTankP2, cameraPlayer2, HUDP2, objectiveMHUD, scoreM, animationIntroM ;
    public GameObject timerTime;
    public Camera MainCamera;
    GameObject tank, tankm1, tankm2;
    
    public void Start()
    {
        switch(LoadScene.sceneNumber)
        {
            case 0:

            tank = Instantiate(myTankP1, new Vector3(-34, -8, 0), Quaternion.identity);
                
                tank.GetComponent<Tank2DMovement>().ShootInput = "Shoot";
                tank.GetComponent<Tank2DMovement>().ShieldInput = "Shield";
                tank.GetComponent<Tank2DMovement>().keyboardHorizontalInput = "Horizontal";
                tank.GetComponent<Tank2DMovement>().keyboardVerticalInput = "Vertical";
                tank.GetComponent<Tank2DMovement>().leftJoystickHorizontalInput = "Left Joystick Horizontal";
                tank.GetComponent<Tank2DMovement>().leftJoystickVerticalInput = "Left Joystick Vertical";
                tank.GetComponent<Tank2DMovement>().rightJoystickHorizontalInput = "Right Joystick Horizontal";
                tank.GetComponent<Tank2DMovement>().rightJoystickVerticalInput = "Right Joystick Vertical";
                tank.GetComponent<Tank2DMovement>().accelerateInput = "Accelerate";
                tank.GetComponent<Tank2DMovement>().camera = MainCamera;
                tank.GetComponentInChildren<Tank2DShootSystem>().ammoHUD = HUDP1.GetComponentInChildren<AmmoHUD>();
                tank.GetComponentInChildren<Tank2DShootSystem>().abilityHUD = HUDP1.GetComponentInChildren<AbilityHUD>();
                tank.GetComponentInChildren<Tank2DShootSystem>().SpeedAbilityHUD = HUDP1.gameObject.transform.GetChild(3).gameObject;
                tank.GetComponentInChildren<Tank2DShootSystem>().SpeedAbilitytimer = HUDP1.gameObject.transform.GetChild(3).GetComponent<TimerSlider>();
                tank.gameObject.transform.GetChild(2).GetComponent<hitbox>().tagRespawn ="tankpoint";
                tank.gameObject.transform.GetChild(2).GetComponent<hitbox>().playerint = 0;
                tank.gameObject.transform.GetChild(2).GetComponent<hitbox>().gameObject.tag ="Untagged";
                tank.gameObject.transform.GetChild(2).GetComponent<hitbox>().tagCollide = "";
                HUDP1.gameObject.transform.GetChild(3).GetComponent<TimerSlider>().weapon = tank.GetComponentInChildren<Tank2DShootSystem>();           

            var entities = Instantiate(Enemies, new Vector3(-20, 12, 0), Quaternion.identity);
            var cameraS = Instantiate(cameraPlayer1, new Vector3(-20, 12, 0), Quaternion.identity);

                cameraS.GetComponent<CinemachineVirtualCamera>().m_Follow = tank.transform;

            var objective = Instantiate(objectives, new Vector3(0, 0, 0), Quaternion.identity);
            var scoreSolo = Instantiate(scoreS, new Vector3(0, 0, 0), Quaternion.identity);
            var anim = Instantiate(animationIntroS, new Vector3(0, 0, 0), Quaternion.identity);

                objective.GetComponent<Objectives>().maxpunctuation = 20;    
                objective.GetComponent<Objectives>().timertext = timerTime.GetComponentInChildren<Text>();
                objective.GetComponent<Objectives>().transition = GameObject.Find("CanvasTransition").GetComponent<Animator>();
                objective.GetComponent<Objectives>().score = scoreSolo;
                objective.GetComponent<Objectives>().objectivetext = objectiveSHUD.GetComponentInChildren<Text>();
                objective.GetComponent<Objectives>().typeObjective = 0;

 
            break;

            case 1:
            tankm1 = Instantiate(myTankP1, new Vector3(-32, 24, 0), Quaternion.identity);

                tankm1.GetComponent<Tank2DMovement>().ShootInput = "ShootS";
                tankm1.GetComponent<Tank2DMovement>().ShieldInput = "ShieldS";
                tankm1.GetComponent<Tank2DMovement>().keyboardHorizontalInput = "HorizontalS";
                tankm1.GetComponent<Tank2DMovement>().keyboardVerticalInput = "VerticalS";
                tankm1.GetComponent<Tank2DMovement>().leftJoystickHorizontalInput = "Left Joystick HorizontalS";
                tankm1.GetComponent<Tank2DMovement>().leftJoystickVerticalInput = "Left Joystick VerticalS";
                tankm1.GetComponent<Tank2DMovement>().rightJoystickHorizontalInput = "Right Joystick HorizontalS";
                tankm1.GetComponent<Tank2DMovement>().rightJoystickVerticalInput = "Right Joystick VerticalS";
                tankm1.GetComponent<Tank2DMovement>().accelerateInput = "AccelerateS";
                tankm1.GetComponent<Tank2DMovement>().camera = MainCamera;
                tankm1.GetComponentInChildren<Tank2DShootSystem>().ammoHUD = HUDP1.GetComponentInChildren<AmmoHUD>();
                tankm1.GetComponentInChildren<Tank2DShootSystem>().abilityHUD = HUDP1.GetComponentInChildren<AbilityHUD>();
                tankm1.GetComponentInChildren<Tank2DShootSystem>().SpeedAbilityHUD = HUDP1.gameObject.transform.GetChild(3).gameObject;
                tankm1.GetComponentInChildren<Tank2DShootSystem>().SpeedAbilitytimer = HUDP1.gameObject.transform.GetChild(3).GetComponent<TimerSlider>();
                tankm1.gameObject.transform.GetChild(2).GetComponent<hitbox>().tagRespawn ="tankpoint";
                tankm1.gameObject.transform.GetChild(2).GetComponent<hitbox>().playerint = 1;
                HUDP1.gameObject.transform.GetChild(3).GetComponent<TimerSlider>().weapon = tankm1.GetComponentInChildren<Tank2DShootSystem>();
            
            tankm2 = Instantiate(myTankP2, new Vector3(13, -7, 0), Quaternion.identity);
            
                tankm2.GetComponent<Tank2DMovement>().ShootInput = "ShootK";
                tankm2.GetComponent<Tank2DMovement>().ShieldInput = "ShieldK";
                tankm2.GetComponent<Tank2DMovement>().keyboardHorizontalInput = "HorizontalK";
                tankm2.GetComponent<Tank2DMovement>().keyboardVerticalInput = "VerticalK";
                tankm2.GetComponent<Tank2DMovement>().leftJoystickHorizontalInput = "Left Joystick Horizontal";
                tankm2.GetComponent<Tank2DMovement>().leftJoystickVerticalInput = "Left Joystick Vertical";
                tankm2.GetComponent<Tank2DMovement>().rightJoystickHorizontalInput = "Right Joystick Horizontal";
                tankm2.GetComponent<Tank2DMovement>().rightJoystickVerticalInput = "Right Joystick Vertical";
                tankm2.GetComponent<Tank2DMovement>().accelerateInput = "AccelerateK";
                tankm2.GetComponent<Tank2DMovement>().MouseAim = false;
                tankm2.GetComponent<Tank2DMovement>().camera = MainCamera;
                tankm2.GetComponentInChildren<Tank2DShootSystem>().ammoHUD = HUDP2.GetComponentInChildren<AmmoHUD>();
                tankm2.GetComponentInChildren<Tank2DShootSystem>().abilityHUD = HUDP2.GetComponentInChildren<AbilityHUD>();
                tankm2.GetComponentInChildren<Tank2DShootSystem>().SpeedAbilityHUD = HUDP2.gameObject.transform.GetChild(3).gameObject;
                tankm2.GetComponentInChildren<Tank2DShootSystem>().SpeedAbilitytimer = HUDP2.gameObject.transform.GetChild(3).GetComponent<TimerSlider>();
                tankm2.gameObject.transform.GetChild(2).GetComponent<hitbox>().tagRespawn ="tankpointboy";
                tankm2.gameObject.transform.GetChild(2).GetComponent<hitbox>().playerint = 0;       
                HUDP2.gameObject.transform.GetChild(3).GetComponent<TimerSlider>().weapon = tankm2.GetComponentInChildren<Tank2DShootSystem>();
                
                
            var cameraM = Instantiate(cameraPlayer2, new Vector3(-20, 12, 0), Quaternion.identity);

                cameraM.GetComponentInChildren<CinemachineTargetGroup>().m_Targets[0].target = tankm1.transform;
                cameraM.GetComponentInChildren<CinemachineTargetGroup>().m_Targets[1].target = tankm2.transform;

            var objectivem = Instantiate(objectives, new Vector3(0, 0, 0), Quaternion.identity);
            var scoreMulti = Instantiate(scoreM, new Vector3(0, 0, 0), Quaternion.identity);
            var animM = Instantiate(animationIntroM, new Vector3(0, 0, 0), Quaternion.identity);
                
                objectivem.GetComponent<Objectives>().maxpunctuation = 3;
                objectivem.GetComponent<Objectives>().timertext = timerTime.GetComponentInChildren<Text>();
                objectivem.GetComponent<Objectives>().transition = GameObject.Find("CanvasTransition").GetComponent<Animator>();
                GameObject.FindWithTag("tankpoint").GetComponent<Fillerposition>().fillerelement= tankm1;
                GameObject.FindWithTag("tankpointboy").GetComponent<Fillerposition>().fillerelement= tankm2;                
                objectivem.GetComponent<Objectives>().score = scoreMulti;
                objectivem.GetComponent<Objectives>().objectivetext = objectiveMHUD.gameObject.transform.GetChild(2).GetComponent<Text>();
                objectivem.GetComponent<Objectives>().objectivetextp2 = objectiveMHUD.gameObject.transform.GetChild(3).GetComponent<Text>();
                objectivem.GetComponent<Objectives>().typeObjective = 1;

            break;
        }

    }

    public void startgame()
    {
        timerTime.gameObject.SetActive(true);
        GameObject.Find("UI").GetComponent<Animator>().enabled = true;
        switch(LoadScene.sceneNumber)
        {
            
            case 0:
                    HUDP1.SetActive(true);
                    tank.SetActive(true);
                    objectiveSHUD.SetActive(true);

            break;

            case 1:
                    tankm1.SetActive(true);
                    tankm2.SetActive(true);
                    objectiveMHUD.SetActive(true);
                    HUDP1.SetActive(true);
                    HUDP2.SetActive(true);
            break;
        }
    }

}

