#ifndef __MAKAN
#define __MAKAN
#include <iostream>
#include <string>

class Makan{
    friend class Hero;
    private:
        std::string namaMakanan;
        int buffHP;
        int buffAttak;
        int buffDeffece;
    
    public:
        Makan(const char* name, int nilaiHP = 0, int nilaiAttak = 0, int nilaiDeffece = 0){
            this-> namaMakanan = name;
            this-> buffHP = nilaiHP;
            this-> buffAttak = nilaiAttak;
            this-> buffDeffece = nilaiDeffece;
        }

        void display(){
            std::cout << "Nama makanan : " << this->namaMakanan << std::endl;
            if (this->buffAttak > 1){
                std::cout << "Tipe makanan : buff Attak" << std::endl;
            }else if(this->buffHP > 1){
                std::cout << "Tipe makanan : buff HP" << std::endl;
            }else if(this->buffDeffece > 1){
                std::cout << "Tipe makanan : buff Deffece" << std::endl;
            }
            
        }

};

#endif