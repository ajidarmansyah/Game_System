#ifndef __HERO
#define __HERO
#include<iostream>
#include<string>
#include "makanan.h"
#include "weapon.h"

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

        void display(){
            std::cout << "Nama \t\t:" << this->name << std::endl;
            std::cout << "HP \t\t:" << this->HP << std::endl;
            std::cout << "Attak \t\t:" << this->attak << std::endl;
            std::cout << "Deffece \t:" << this->deffece << std::endl;
        }
        
        void makan(Makan obj){
            this->attak += obj.buffAttak;
            this->HP += obj.buffHP;
            this->deffece += obj.buffDeffece;

            std::cout << this->name << " makan " << obj.namaMakanan << std::endl;
        }

        void useWeapon(Weapon obj){
            this->attak += obj.baseAttak;
        }
};

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

        void displayAyakaHero(){
            Hero::display();
            std::cout << "Cryo bonus \t:" << this->cryoBonus << std::endl;
        }

        int ayakaSkill(){
            std::cout << "Ayaka melancarkan skill : "<< this->attak << std::endl;
            return this->attak;
        }
};

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

        void displaySenheHero(){
            Hero::display();
            std::cout << "Cryo bonus \t:" << this->cryoBonus << std::endl;
        }

        int senheSkill(AyakaHero &obj){
            obj.attak += this->cryoBonus;
            std::cout << "Senhe melancarkan skill : " << (this->attak += this->cryoBonus) << std::endl; 
            return this->attak += this->cryoBonus;
        }
};

#endif