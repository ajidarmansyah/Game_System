#ifndef __HERO
#define __HERO
#include<iostream>
#include<string>
#include "makanan.h"
#include "weapon.h"
#include "artefak.h"

//Base class
class Hero{
    protected:
        std::string name;
        float HP;
        float attak;
        float deffece;
    
    public:
        Hero(const char* name, float HP = 100.0, float attak = 50.0, float deffece = 20.0){
            this->name = name;
            this->HP = HP;
            this->attak = attak;
            this->deffece = deffece;
        }

        // method untuk melihat statistik karakter
        void display(){
            std::cout << "Nama \t\t:" << this->name << std::endl;
            std::cout << "HP \t\t:" << this->HP << std::endl;
            std::cout << "Attak \t\t:" << this->attak << std::endl;
            std::cout << "Deffece \t:" << this->deffece << std::endl;
        }
        
        // method untuk makan
        void makan(Makan obj){
            this->attak += obj.buffAttak;
            this->HP += obj.buffHP;
            this->deffece += obj.buffDeffece;

            std::cout << this->name << " makan " << obj.namaMakanan << std::endl;
        }

        // method untuk menggunakan senjata
        void useWeapon(Weapon obj){
            this->attak += obj.baseAttak;
        }

        // method untuk menggunakan artefak
        void useArtefak(Artefak obj1, Artefak obj2, Artefak obj3, Artefak obj4){

            // passive untuk 2 set artefak
            if (obj1.kategori == "crimson" && obj2.kategori == "crimson"){
                this->attak += 20;
            } else if (obj1.kategori == "gladiator" && obj2.kategori == "gladiator"){
                this->HP += 30;
            }

            // passive untuk 4 set artefak
            if (obj1.kategori == "crimson" && obj2.kategori == "crimson" && obj3.kategori == "crimson" && obj4.kategori == "crimson"){
                this->deffece += 20;
            } else if (obj1.kategori == "gladiator" && obj2.kategori == "gladiator" && obj3.kategori == "gladiator" && obj4.kategori == "gladiator"){
                this->attak += 10;
            }
            
            this->attak += obj1.attak + obj2.attak;
            this->HP += obj1.HP + obj2.HP;
        }
};

// SUB CLASS FROM HERO

// hero ayaka
class AyakaHero : public Hero{
    friend class SenheHero;
    protected:
        float cryoBonus;
    
    public:
        AyakaHero(const char* name = "hero", 
                float HP = 100.0, 
                float attak = 50.0, 
                float deffece = 20.0, 
                float valueCryoBonus = 0) : Hero(name, HP, attak, deffece){
            
            this->cryoBonus = valueCryoBonus;
        }

        // method untuk melihat statistik karakter ayaka
        void displayAyakaHero(){
            Hero::display();
            std::cout << "Cryo bonus \t:" << this->cryoBonus << std::endl;
        }

        // method skill karakter ayaka
        int ayakaSkill(){
            std::cout << "Ayaka melancarkan skill : "<< this->attak << std::endl;
            return this->attak;
        }
};

// hero senhe
class SenheHero : public Hero{
    protected:
        float cryoBonus;
    
    public:
        SenheHero(const char* name = "hero", 
                float HP = 100.0, 
                float attak = 50.0, 
                float deffece = 20.0, 
                float valueCryoBonus = 0) : Hero(name, HP, attak, deffece){
            
            this->cryoBonus = valueCryoBonus;
        }

        // method untuk melihat statistik karakter senhe
        void displaySenheHero(){
            Hero::display();
            std::cout << "Cryo bonus \t:" << this->cryoBonus << std::endl;
        }

        // // method skill karakter senhe
        int senheSkill(AyakaHero &obj){
            obj.attak += this->cryoBonus;
            std::cout << "Senhe melancarkan skill : " << (this->attak += this->cryoBonus) << std::endl; 
            return this->attak += this->cryoBonus;
        }
};

#endif