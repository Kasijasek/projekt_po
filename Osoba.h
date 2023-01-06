#pragma once
class Osoba	// abstrakcyjna klasa osoba
{
private:
	string imie;
	string nazwisko;
	string adres;
	int PESEL;
	int nr_telefonu;
public:
	Osoba(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_);
	virtual ~Osoba(){}
	
	string get_imie() const;
	string get_nazwisko() const;
	string get_adres() const;
	int get_PESEL() const;
	int get_nr_telefonu() const;
};