#include <iostream>
#include <string>
#include "hero.h"
#include "makanan.h"

using namespace std;

int main(int argc, char const *argv[])
{

    AyakaHero Ayaka("Kamisato Ayaka");
    SenheHero Senhe("Senhe", 120, 130, 10, 50);
    Makan soto = Makan("Soto",12,5);

    Ayaka.displayAyakaHero();
    cout << endl;
    Senhe.senheSkill(Ayaka);
    cout << endl;
    Ayaka.displayAyakaHero();

    return 0;
}
