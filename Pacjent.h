#pragma once
#include "Kartoteka.h"
class Pacjent:public Osoba
{
private: 
	string stan_pacjenta;
	Kartoteka kartoteka_pacjenta;
public:
	Pacjent(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, string stan_pacjenta_);
	Pacjent(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, string stan_pacjenta_, string opis_choroby_, string przebieg_leczenia_, bool stan_aktywnosci_);
	string get_stan_pacjenta() const;
	void przegladnij_lekarzy();
	void zapisz_na_wizyte();
	void anuluj_wizyte();
	void potwierdzenie_wizyty();
	void wyszukaj_kartoteke_pacjenta();
	void stworz_pacjenta();
	void zmiana_statusu_wizyty();
	void zmiana_statusu_pacjenta();
};