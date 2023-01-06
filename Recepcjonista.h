#pragma once

class Recepcjonista: public Osoba
{
private:
	int id_pracownika;
public:
	Recepcjonista(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, int id_pracownika);
	int get_id_pracownika() const;
	void sprawdz_kartoteke();
	void otworz_wizyte_w_kalendarzu();
	void wyswietl_kalendarz_wizyt();
	void wybierz_gabinet();
	void wybierz_lekarza();
	void stworz_konto_pacjenta();
	void lista_lekarzy();
};