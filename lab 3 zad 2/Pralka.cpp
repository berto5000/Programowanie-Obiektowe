#include <iostream>
#include <string>
#include "Pralka.h"

using namespace std;

Pralka::Pralka(string nazwa, string typ, string cena, string ilosc)
{

	this->nazwa = nazwa;
	if ((typ[0] >= 65 && typ[0] <= 90) || (typ[0] >= 97 && typ[0] <= 122))
	{
		if (typ[typ.length() - 1] >= '0' && typ[typ.length() - 1] <= '9')
		{
			this->typ = typ;
		}
		else
		{
			cout << "nieprawidlowy typ \n";
			this->typ = "error";
		}
	}
	else
	{
		cout << "nieprawidlowy typ \n";
		this->typ = "error";
	}

	this->cena = cena;
	this->ilosc = ilosc;
	nowaCena(cena);
	nowaIlosc(ilosc);

}
string Pralka::wezNazwe() const
{
	return nazwa;
}

string Pralka::wezTyp() const
{
	return typ;
}

string Pralka::wezCene() const
{
	return cena;
}

string Pralka::wezIlosc() const
{
	return ilosc;
}

Pralka& Pralka::nowaCena(string cena)
{
	this->cena = cena;
	return*this;
}
Pralka& Pralka::nowaIlosc(string ilosc)
{
	this->ilosc = ilosc;
	return*this;
}
void Pralka::napisz() const
{
	cout << "Pralka: " << nazwa << ",typu: " << typ << " ,w cenie: " << cena << " ,jest dostepna w ilosci  " << ilosc<< " sztuk." << endl;
}