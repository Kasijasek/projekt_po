#include <iostream>
using namespace std;
#include "headers.h"

Recepcjonista::Recepcjonista(string imie_, string nazwisko_, string adres_, int PESEL_, int nr_telefonu_, int id_pracownika_) : Osoba(imie_, nazwisko_, adres_, PESEL_, nr_telefonu_)
{
	id_pracownika_ = id_pracownika;
}

int Recepcjonista::get_id_pracownika() const
{
	return id_pracownika;
}

void Recepcjonista::sprawdz_kartoteke()
{

}
void Recepcjonista::otworz_wizyte_w_kalendarzu()
{

}
void Recepcjonista::wyswietl_kalendarz_wizyt()
{

}
void Recepcjonista::wybierz_gabinet()
{

}
void Recepcjonista::wybierz_lekarza()
{

}

void Recepcjonista::stworz_konto_pacjenta()
{

}
void Recepcjonista::lista_lekarzy()
{

}