#pragma once
class Lekarz:public Osoba
{
private:
	string specjalizacja;
	int numer_PWZ;
public:
	Lekarz(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, string specjalizacja_, int numer_PWZ_);
	string get_specjalizacja() const;
	int get_numer_PWZ() const;
	void sprawdz_kartoteke();
	void wypisz_nazwisko_i_specjalizacje ();
	void otworz_wizyte_w_kalendarzu();
	void zmiana_statusu_wizyty();
};