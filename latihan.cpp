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
    Artefak bulu = Artefak("bulu", "crimson", 10);
    Artefak bunga = Artefak("bunga", "crimson", 0);
    Artefak mahkota = Artefak("mahkota", "crimson", 0);
    Artefak goblet = Artefak("goblet", "crimson", 0);


    Senhe.display();
    cout << endl;
    Senhe.useArtefak(bulu, bunga, mahkota, goblet);
    Senhe.display();
    cout << endl;
    
    // 2 set crimson : 20 ATK
    // 2 set gladiator : 30 HP
    // 4 set crimson : 20 ATK dan 20 deffence
    // 4 set gladiator : 30 HP dan 10 ATK
    return 0;
}
