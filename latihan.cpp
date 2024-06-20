#include <iostream>
#include <string>

using namespace std;

class Makan{
    friend class Hero;
    private:
        string namaMakanan;
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
            cout << "Nama makanan : " << this->namaMakanan << endl;
            if (this->buffAttak > 1){
                cout << "Tipe makanan : buff Attak" << endl;
            }else if(this->buffHP > 1){
                cout << "Tipe makanan : buff HP" << endl;
            }else if(this->buffDeffece > 1){
                cout << "Tipe makanan : buff Deffece" << endl;
            }
            
        }

};

class Hero{
    private:
        string name;
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
            cout << "Nama \t:" << this->name << endl;
            cout << "HP \t:" << this->HP << endl;
            cout << "Attak \t:" << this->attak << endl;
            cout << "Deffece :" << this->deffece << endl;
        }

        void makan(Makan obj){
            this->attak += obj.buffAttak;
            this->HP += obj.buffHP;
            this->deffece += obj.buffDeffece;

            cout << this->name << " makan " << obj.namaMakanan << endl;
        }
};

int main(int argc, char const *argv[])
{
    Hero Ayaka = Hero("Kamisato Ayaka");
    Makan soto = Makan("Soto",12,5);
    Ayaka.display();
    Ayaka.makan(soto);
    Ayaka.display();
    return 0;
}
