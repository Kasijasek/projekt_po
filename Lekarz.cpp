#include <iostream>
using namespace std;
#include "headers.h"

Lekarz::Lekarz(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, string specjalizacja_, int numer_PWZ_) : Osoba(imie_, nazwisko_, adres_, PESEL_, nr_telefonu_)
{
	specjalizacja = specjalizacja_;
	numer_PWZ = numer_PWZ_;
}

string Lekarz::get_specjalizacja() const
{
	return specjalizacja;
}

int Lekarz::get_numer_PWZ() const
{
	return numer_PWZ;
}

void Lekarz::wypisz_nazwisko_i_specjalizacje()
{
	cout << get_imie() << " " << get_nazwisko() << ", specjalizacja: " << get_specjalizacja() << endl;
}