#ifndef __ARTEFAK
#define __ARTEFAK

#include <iostream>
#include <string>

class Artefak{
    friend class Hero;
    protected:
        std::string name;
        std::string kategori;
        float attak;
        float HP;
    
    public:
        Artefak(const char* name, const char* kategori, float attak = 0, float HP = 0){
            this->name = name;
            this->kategori = kategori;
            this->attak = attak;
            this->HP = HP;
        }

        void dispalyArtefak(){
            std::cout << "Nama artefak \t :" << this->name << std::endl;
            std::cout << "Kategori \t :" << this->kategori << std::endl;
            std::cout << "Attak \t\t:" << this->attak << std::endl;
            std::cout << "HP \t\t:" << this->HP << std::endl;
        }
};

#endif