#include <iostream>
#include"Paszport.h"
#include<conio.h>
using namespace std;
int main()
{
	Paszport Marian("Marian","Pazdzioch", "333333333333", "2025-12-31");
	Marian.napisz();
	Marian.nowaData("2030-12-31");
	Marian.napisz();
	Paszport Ferdynand("Ferdynand", "Kiepski", "444444444444", "2025-12-31");
	Ferdynand.napisz();
  
}