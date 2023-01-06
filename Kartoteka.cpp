#include <iostream>
using namespace std;
#include "headers.h"

Kartoteka::Kartoteka(): opis_choroby(""), przebieg_leczenia(""), stan_aktywnosci(false){}

string Kartoteka::get_opis_choroby() const
{
	return opis_choroby;
}

string Kartoteka::get_przebieg_leczenia() const
{
	return przebieg_leczenia;
}
bool Kartoteka::get_stan_aktywnosci() const
{
	return stan_aktywnosci;
}

Kartoteka::Kartoteka(string opis_choroby_, string przebieg_leczenia_, bool stan_aktywnosci_)
{
	opis_choroby = opis_choroby_;
	przebieg_leczenia = przebieg_leczenia_;
	stan_aktywnosci = stan_aktywnosci_;
}

void Kartoteka::edytuj_dane_pacjenta(string opis_choroby_, string przebieg_leczenia_, bool stan_aktywnosci_)
{
	opis_choroby = opis_choroby_;
	przebieg_leczenia = przebieg_leczenia_;
	stan_aktywnosci = stan_aktywnosci_;
}