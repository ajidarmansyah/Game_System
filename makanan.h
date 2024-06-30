#ifndef __MAKAN
#define __MAKAN
#include <iostream>
#include <string>

class Makan{
    friend class Hero;
    private:
        std::string namaMakanan;
        float buffHP;
        float buffAttak;
        float buffDeffece;
    
    public:
        Makan(const char* name, float nilaiHP = 0, float nilaiAttak = 0, float nilaiDeffece = 0){
            this-> namaMakanan = name;
            this-> buffHP = nilaiHP;
            this-> buffAttak = nilaiAttak;
            this-> buffDeffece = nilaiDeffece;
        }

        void display(){
            std::cout << this->namaMakanan << endl;
            std::cout << this->buffHP << endl;
            std::cout << this->buffAttak << endl;
            std::cout << this->buffDeffece << endl;
        }

        void displayKategori(){
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