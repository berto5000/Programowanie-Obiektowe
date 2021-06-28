#include <iostream>
#include"Paszport.h"
#include<conio.h>
using namespace std;
int main()
{
	Paszport Jan("Jan","Nowak", "333333333333", "2025-12-31");
	Jan.napisz();
	Jan.nowaData("2030-12-31");
	Jan.napisz();
	Paszport Krzysztof("Krzysztof", "Nowicki", "444444444444", "2025-12-31");
	Krzysztof.napisz();
  
}
