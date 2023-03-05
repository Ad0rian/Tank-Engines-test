using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tank2DControllers;

public class Tank2DShootSystem : MonoBehaviour
{
    //Set the Bullet object.
    [SerializeField] GameObject bulletObject;
    //Set where the bullet will be shooted.
    [SerializeField] Transform firePoint;
    //Set the fire force will have the bullet.
    [SerializeField] float fireForce = 60f;
    //Set the ammo the player will have.
    public int startAmmo = 10,currentAmmo, maxAmmo = 15; 
    //Set the abilities status.
    public bool shieldStatus= false, speedStatus= false;
    //Set the player's UI ammo.
    public AmmoHUD ammoHUD;
    //Set the player's UI abilities.
    public AbilityHUD abilityHUD;
    //Set the cannon animator.
    public Animator Cannon;
    //Set the shield ability UI icon.
    public GameObject ShieldAbility;
    //Set the speed ability UI icon.
    public GameObject SpeedAbilityHUD;
    //Set the tank movement script.
    public Tank2DMovement tank2DMovement;
    //Set the timer slider UI of the speed ability.
    public TimerSlider SpeedAbilitytimer;
    //Set the Shooting effect script.
    public Effects EffectOnomatopoeiaShoot;
    //Set the Shield effect script.
    public Effects EffectOnomatopoeiaShield;
    //Set the bullet animator.
    Animator animationBullet;
    //Set the variables of the back and forward speed for the tank animator movement.
    private float fSpeed, bSpeed;

    void Start()
    {
        //Set Ammo, and backward and forwad speed animator status.

        currentAmmo = startAmmo;
        fSpeed = tank2DMovement.forwardSpeed;
        bSpeed = tank2DMovement.backwardSpeed;
        UpdatingHUD();
    }

    public void Shoot()
    {
        //Shoot Event.

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
        //Shield Ability Event.

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
        //Speed Ability Event.

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
        //Fill Ammo to the player.

        currentAmmo += ammoAmount;
        if (currentAmmo > maxAmmo)currentAmmo = maxAmmo;
        UpdatingHUD();
    }

    public void AddShield()
    {
        //Fill Shield Ability.

        if (shieldStatus)
        {
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("Shield",false);
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("No",true);
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("Speed",false);
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
        //Fill Speed ability.

        if (speedStatus)
        {
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("Speed",false);
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("Shield",false);
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("No",true);
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
        //Update the state of the HUD for the speed and shield ability.
        
        if (shieldStatus && !speedStatus)
        {
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("Shield",true);
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("No",false);
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("Speed",false);
        }

        if (speedStatus && !shieldStatus)
        {
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("Speed",true);
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("Shield",false);
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("No",false);
        }

        if (!shieldStatus && !speedStatus)
        {
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("No" , true); 
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("No", true);
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("Speed" , false); 
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("Speed", false);
            abilityHUD.speedTank.GetComponent<Animator>().SetBool("Shield" , false); 
            abilityHUD.shieldTank.GetComponent<Animator>().SetBool("Shield", false);
        }

        //Update the state of the HUD for the ammo.

        int i=maxAmmo;
        foreach(GameObject bulletHUD in ammoHUD.ammoTank) {
            animationBullet = bulletHUD.GetComponent<Animator>();
            
            if (i > currentAmmo)bulletHUD.SetActive(false);
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
