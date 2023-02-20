using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tank2DControllers;

public class Tank2DShootSystem : MonoBehaviour
{
    [SerializeField] GameObject bulletObject;
    [SerializeField] Transform firePoint;
    [SerializeField] float fireForce = 60f;
    public int startAmmo = 10,currentAmmo, maxAmmo = 15; 
    public bool shieldStatus= false, speedStatus= false;
    public AmmoHUD ammoHUD;
    public ShieldHUD shieldHUD;
    public SpeedHUD speedHUD;
    public Animator Cannon;
    public GameObject ShieldAbility;
    public GameObject SpeedAbilityHUD;
    public Tank2DMovement tank2DMovement;
    public TimerSlider SpeedAbilitytimer;
    public Effects EffectOnomatopoeiaShoot;
    public Effects EffectOnomatopoeiaShield;
    Animator animationBullet;
    private float fSpeed, bSpeed;


    // Start is called before the first frame update
    void Start()
    {
        currentAmmo = startAmmo;
        fSpeed = tank2DMovement.forwardSpeed;
        bSpeed = tank2DMovement.backwardSpeed;
        UpdatingHUD();
    }

    public void Shoot()
    {
        if (currentAmmo > 0)
        {
            Cannon.SetTrigger("Shoot");
            GameObject bullet = Instantiate(bulletObject, firePoint.position, firePoint.rotation);
            bullet.GetComponent<Rigidbody2D>().AddForce(firePoint.up * fireForce, ForceMode2D.Impulse);
            EffectOnomatopoeiaShoot.InstantiateEffect();
            currentAmmo --;
            UpdatingHUD();
        }
        
    }

    public void Shield()
    {
        if (shieldStatus)
        {
            EffectOnomatopoeiaShield.InstantiateEffect();
            ShieldAbility.SetActive(true);
            shieldStatus = false;
            UpdatingHUD();

        }
    }

    public void Speed()
    {
        if (speedStatus)
        {
            SpeedAbilityHUD.SetActive(false);
            tank2DMovement.forwardSpeed = fSpeed;
            tank2DMovement.backwardSpeed = bSpeed;
            speedStatus = false;
            UpdatingHUD();     
        }

    }

    public void AddAmmo(int ammoAmount)
    {
        currentAmmo += ammoAmount;
        if (currentAmmo > maxAmmo)
        {
            currentAmmo = maxAmmo;
        }
        UpdatingHUD();
    }

    public void AddShield()
    {
        if (shieldStatus)
        {
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Shield",false);
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("No",true);
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Speed",false);
        }
        SpeedAbilityHUD.SetActive(false);
        tank2DMovement.forwardSpeed = fSpeed;
        tank2DMovement.backwardSpeed = bSpeed;
        shieldStatus=true;
        speedStatus=false;
        UpdatingHUD();
    }

    public void AddSpeed()
    {
        if (speedStatus)
        {
           speedHUD.speedTank.GetComponent<Animator>().SetBool("Speed",false);
            speedHUD.speedTank.GetComponent<Animator>().SetBool("Shield",false);
            speedHUD.speedTank.GetComponent<Animator>().SetBool("No",true);
        }
        shieldStatus=false;
        speedStatus=true;
        SpeedAbilityHUD.SetActive(true);
        SpeedAbilitytimer.RestartTimer();
        tank2DMovement.forwardSpeed = fSpeed * 2.0f;
        tank2DMovement.backwardSpeed = bSpeed * 2.0f;
        UpdatingHUD();
    }

    public void UpdatingHUD()
    {
        if (shieldStatus && !speedStatus)
        {
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Shield",true);
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("No",false);
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Speed",false);

        }
        if (speedStatus && !shieldStatus)
        {
            speedHUD.speedTank.GetComponent<Animator>().SetBool("Speed",true);
            speedHUD.speedTank.GetComponent<Animator>().SetBool("Shield",false);
            speedHUD.speedTank.GetComponent<Animator>().SetBool("No",false);
        }

        if (!shieldStatus && !speedStatus)
        {
            speedHUD.speedTank.GetComponent<Animator>().SetBool("No" , true); 
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("No", true);
            speedHUD.speedTank.GetComponent<Animator>().SetBool("Speed" , false); 
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Speed", false);
            speedHUD.speedTank.GetComponent<Animator>().SetBool("Shield" , false); 
            shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Shield", false);
        }



        int i=maxAmmo;
        foreach(GameObject bulletHUD in ammoHUD.ammoTank) {
            animationBullet = bulletHUD.GetComponent<Animator>();
            
            if (i > currentAmmo)
            {
                animationBullet.SetBool("yesAmmo",true);
                animationBullet.SetBool("selectedAmmo",false);     
                bulletHUD.SetActive(false);          
            }
            else if(i == currentAmmo)
            {
                animationBullet.SetBool("selectedAmmo",true);
                animationBullet.SetBool("yesAmmo",false);
                bulletHUD.SetActive(true);
            }
            else {
                animationBullet.SetBool("yesAmmo",true);
                animationBullet.SetBool("selectedAmmo",false);
                bulletHUD.SetActive(true);
            }
            i--;
        }
    }
}
