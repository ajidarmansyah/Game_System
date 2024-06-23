#ifndef __WEAPON
#define __WEAPON
#include <iostream>
#include <string>

// BASE CLASS FOR WEAPON
class Weapon{
    friend class Hero;
    protected:
        std::string name;
        std::string kategori;
        float baseAttak;
    
    public:
        Weapon(const char* name, const char* kategori, float baseAttak = 0){
            this->name = name;
            this->kategori = kategori;
            this->baseAttak = baseAttak;
        }

        void displayWeapon(){
            std::cout << "Nama senjata \t:" << this->name << std::endl;
            std::cout << "Nama kategori \t:" << this->kategori << std::endl;
            std::cout << "Nama baseAttak \t:" << this->baseAttak << std::endl;
        }
};

//FUNTCION FOR WEAPON


#endif