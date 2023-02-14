using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
    Animator animationBullet;



    // Start is called before the first frame update
    void Start()
    {
        currentAmmo = startAmmo;
        UpdatingHUD();
    }

    public void Shoot()
    {
        if (currentAmmo > 0)
        {
            Cannon.SetTrigger("Shoot");
            GameObject bullet = Instantiate(bulletObject, firePoint.position, firePoint.rotation);
            bullet.GetComponent<Rigidbody2D>().AddForce(firePoint.up * fireForce, ForceMode2D.Impulse);
            currentAmmo --;
            UpdatingHUD();
        }
        
    }

    public void Shield()
    {
        if (shieldStatus)
        {
            ShieldAbility.SetActive(true);
            shieldStatus = false;
            UpdatingHUD();

        }
    }

    public void Speed()
    {
        if (speedStatus)
        {
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
        shieldStatus=true;
        speedStatus=false;
        UpdatingHUD();
    }

    public void AddSpeed()
    {
        shieldStatus=false;
        speedStatus=true;
        UpdatingHUD();
    }

    public void UpdatingHUD()
    {
        if (shieldStatus)shieldHUD.shieldTank.GetComponent<Animator>().SetTrigger("Shield");

        if (speedStatus)speedHUD.speedTank.GetComponent<Animator>().SetTrigger("Speed");

        if (!shieldStatus && !speedStatus) speedHUD.speedTank.GetComponent<Animator>().SetTrigger("No");   



        int i=maxAmmo;
        foreach(GameObject bulletHUD in ammoHUD.ammoTank) {
            animationBullet = bulletHUD.GetComponent<Animator>();
            
            if (i > currentAmmo) bulletHUD.SetActive(false);
            else if(i == currentAmmo)
            {
                animationBullet.SetTrigger("selectedAmmo");
                bulletHUD.SetActive(true);
            }
            else animationBullet.SetTrigger("yesAmmo");
            i--;
        }
    }
}
