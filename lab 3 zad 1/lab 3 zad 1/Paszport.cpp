#include <iostream>
#include <string>
#include "Paszport.h"

using namespace std;

Paszport::Paszport(string imie, string nazwisko, string nr_ser, string data)
{
	if (imie[0] >= 65 && imie[0] <= 90)
	{
		this->imie = imie;
	}
	else
	{
		cout << "podano nieprawidlowe imie "<<endl;
		this->imie = "error";
	}
	if (nazwisko[0] >= 65 && nazwisko[0] <= 90)
	{
        this->nazwisko = nazwisko;
	}
	else
	{
		cout << "podano nieprawidlowe nazwisko " << endl;
		this->nazwisko = "error";
	}
	if (nr_ser.length() == 12)
	{
		this->nr_ser = nr_ser;
	}
	else
	{
		cout << "podano nieprawidlowy nr seryjny " << endl;
		this->nr_ser = "error";
	}

	this->data = data;

	nowaData(data);
}

string Paszport::wezImie() const
{
	return imie;
}

string Paszport::wezNazwisko() const
{
	return nazwisko;
}

string Paszport::wezNr() const
{
	return nr_ser;
}

string Paszport ::wezDate() const
{
	return data;
}

Paszport & Paszport::nowaData(string data)
{
	this->data = data;
	return*this;
}
void Paszport::napisz() const
{
	cout << "Wlasciciel rachunku: " <<imie<<" "<<nazwisko << " ,numer seryjny " <<nr_ser << " ,data " <<data<<endl;
}