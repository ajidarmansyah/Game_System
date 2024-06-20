#ifndef __HERO
#define __HERO
#include<iostream>
#include<string>
#include "makanan.h"

class Hero{
    private:
        std::string name;
        int HP;
        int attak;
        int deffece;
    
    public:
        Hero(const char* name){
            this->name = name;
            this->HP = 100;
            this->attak = 50;
            this->deffece = 20;
        }

        void display(){
            std::cout << "Nama \t:" << this->name << std::endl;
            std::cout << "HP \t:" << this->HP << std::endl;
            std::cout << "Attak \t:" << this->attak << std::endl;
            std::cout << "Deffece :" << this->deffece << std::endl;
        }

        void makan(Makan obj){
            this->attak += obj.buffAttak;
            this->HP += obj.buffHP;
            this->deffece += obj.buffDeffece;

            std::cout << this->name << " makan " << obj.namaMakanan << std::endl;
        }
};

#endif