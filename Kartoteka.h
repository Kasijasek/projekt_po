#pragma once
class Kartoteka
{
private:
	string opis_choroby;
	string przebieg_leczenia;
	bool stan_aktywnosci;
public:
	Kartoteka();
	Kartoteka(string opis_choroby_, string przebieg_leczenia_, bool stan_aktywnosci_);
	string get_opis_choroby() const;
	string get_przebieg_leczenia() const;
	bool get_stan_aktywnosci() const;
	void wyszukaj_pacjenta();
	void sprawdz_dane_pacjenta();
	void edytuj_dane_pacjenta(string opis_choroby_, string przebieg_leczenia_, bool stan_aktywnosci_);
	void dodaj_pacjenta();
	void stworz_memento();
	void set_memento();	// co tutaj w srodku? jaki typ memento?
};