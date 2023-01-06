#include <iostream>
using namespace std;
#include "headers.h"

Osoba::Osoba(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_)
{
	imie = imie_;
	nazwisko = nazwisko_;
	adres = adres_;
	PESEL = PESEL_;
	nr_telefonu = nr_telefonu_;
}

string Osoba::get_imie() const
{
	return imie;
}
string Osoba::get_nazwisko() const
{
	return nazwisko;
}
string Osoba::get_adres() const
{
	return adres;
}
int Osoba::get_PESEL() const
{
	return PESEL;
}
int Osoba::get_nr_telefonu() const
{
	return nr_telefonu;
}