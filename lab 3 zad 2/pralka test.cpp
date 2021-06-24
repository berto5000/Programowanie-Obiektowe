#include <iostream>
#include <string>
#include "Pralka.h"

using namespace std;

int main()
{
    Pralka Frania("Frania", "b8", "1000pln","2");
    Frania.napisz();
    Frania.nowaCena("10000pln");
    Frania.napisz();
    Frania.nowaIlosc("7");
    Frania.napisz();
    Pralka Amica("Amica", "potezneMycie3000","1673pln","8" );
    Amica.napisz();
}
