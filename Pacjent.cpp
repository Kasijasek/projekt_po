#include <iostream>
using namespace std;
#include "headers.h"

Pacjent::Pacjent(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, string stan_pacjenta_) : Osoba(imie_, nazwisko_, adres_, PESEL_, nr_telefonu_)
{
	stan_pacjenta = stan_pacjenta_;
	kartoteka_pacjenta = {};
}

Pacjent::Pacjent(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, string stan_pacjenta_, string opis_choroby_, string przebieg_leczenia_ ,bool stan_aktywnosci_) : Osoba(imie_, nazwisko_, adres_, PESEL_, nr_telefonu_)
{
	stan_pacjenta = stan_pacjenta_;
	kartoteka_pacjenta = {opis_choroby_,  przebieg_leczenia_ , stan_aktywnosci_ };
}

string Pacjent::get_stan_pacjenta() const
{
	return stan_pacjenta;
}

void Pacjent::przegladnij_lekarzy() 
{

}

void Pacjent::zapisz_na_wizyte() 
{

}

void Pacjent::anuluj_wizyte() 
{

}

void Pacjent::potwierdzenie_wizyty() 
{

}

void Pacjent::wyszukaj_kartoteke_pacjenta() 
{

}

void Pacjent::stworz_pacjenta() 
{

}

void Pacjent::zmiana_statusu_wizyty() 
{

}


void Pacjent::zmiana_statusu_pacjenta() 
{

}
