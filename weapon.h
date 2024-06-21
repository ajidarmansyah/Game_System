#ifndef __WEAPON
#define __WEAPON
#include <iostream>
#include <string>

// BASE CLASS FOR WEAPON
class Sword{
    protected:
        std::string name;
        std::string criteria = "Sword";
        int attak;
    
    public:
        Sword(const char* name, int Attak){
            this->name = name;
            this->attak = Attak;
        }

        void displayWepon(){
            std::cout << "Wepon Name \t:" << this->name << std::endl;
            std::cout << "kategori \t:" << this->criteria << std::endl;
            std::cout << "Attak \t:" << this->attak << std::endl;
        }
};

class Boow{
    protected:
        std::string name;
        std::string criteria = "Boow";
        int attak;
    
    public:
        Boow(const char* name, int Attak){
            this->name = name;
            this->attak = Attak;
        }

        void displayWepon(){
            std::cout << "Wepon Name \t:" << this->name << std::endl;
            std::cout << "kategori \t:" << this->criteria << std::endl;
            std::cout << "Attak \t:" << this->attak << std::endl;
        }
};

class Polearm{
    protected:
        std::string name;
        std::string criteria = "Polearm";
        int attak;
    
    public:
        Polearm(const char* name, int Attak){
            this->name = name;
            this->attak = Attak;
        }

        void displayWepon(){
            std::cout << "Wepon Name \t:" << this->name << std::endl;
            std::cout << "kategori \t:" << this->criteria << std::endl;
            std::cout << "Attak \t:" << this->attak << std::endl;
        }
};

class Claymore{
    protected:
        std::string name;
        std::string criteria = "Calymore";
        int attak;
    
    public:
        Claymore(const char* name, int Attak){
            this->name = name;
            this->attak = Attak;
        }

        void displayWepon(){
            std::cout << "Wepon Name \t:" << this->name << std::endl;
            std::cout << "kategori \t:" << this->criteria << std::endl;
            std::cout << "Attak \t:" << this->attak << std::endl;
        }
};

class Catalyst{
    protected:
        std::string name;
        std::string criteria = "Catalyst";
        int attak;
    
    public:
        Catalyst(const char* name, int Attak){
            this->name = name;
            this->attak = Attak;
        }

        void displayWepon(){
            std::cout << "Wepon Name \t:" << this->name << std::endl;
            std::cout << "kategori \t:" << this->criteria << std::endl;
            std::cout << "Attak \t:" << this->attak << std::endl;
        }
};


//SUB CLASS FOROM BASE CLASS WEAPON


#endif