#pragma once
#include<string>

using namespace std;

class Paszport
{
private:
	string imie;
	string nazwisko;
	string nr_ser;
	string data;

public:
	Paszport(string imie, string nazwisko, string nr_ser, string data);

	string wezImie() const;
	string wezNazwisko() const;
	string wezNr() const;
	string wezDate() const;

	Paszport & nowaData(string data);

	void napisz() const;

};