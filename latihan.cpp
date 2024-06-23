#include <iostream>
#include <string>
#include "hero.h"
#include "makanan.h"
#include "weapon.h"

using namespace std;

int main(int argc, char const *argv[])
{

    AyakaHero Ayaka("Kamisato Ayaka");
    SenheHero Senhe("Senhe", 120, 130, 10.5, 50);
    Makan soto = Makan("Soto",12,5);
    Weapon favonius = Weapon("favonius","Sword", 50.5);
    Artefak fider = Artefak("fider", "crimson", 20);

    Senhe.display();
    cout << endl;
    // Senhe.useWeapon(favonius)
    Senhe.useArtefak(fider);
    Senhe.display();
    cout << endl;
    fider.dispalyArtefak();
     
    return 0;
}
