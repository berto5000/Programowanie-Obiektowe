#pragma once
#include<string>

using namespace std;

class Pralka
{
private:
	string nazwa;
	string typ;
	string cena;
	string ilosc;

public:
	Pralka(string nazwa, string typ, string cena, string ilosc);

	string wezNazwe() const;
	string wezTyp() const;
	string wezCene() const;
	string wezIlosc() const;

	Pralka & nowaCena(string cena);
	Pralka & nowaIlosc(string ilosc);

	void napisz() const;

};