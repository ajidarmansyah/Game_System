#include <iostream>
#include <string>
#include "hero.h"
#include "makanan.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Hero Ayaka = Hero("Kamisato Ayaka");
    Makan soto = Makan("Soto",12,5);
    Ayaka.display();
    Ayaka.makan(soto);
    Ayaka.display();
    return 0;
}
