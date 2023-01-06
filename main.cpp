#include <iostream>
#include <vector>
#include <stdlib.h>
#include <windows.h>
using namespace std;
#include "headers.h"


int main()
{
	Lekarz L("Łukasz", "Kowalski", "30-000 Krakow, ul. Przykladowa 1", 123456789, 334455667, "kardiolog", 333444);
	L.wypisz_nazwisko_i_specjalizacje();
	vector<Pacjent> pacjenci;
	Pacjent P1("Katarzyna", "Kowalska", "30-000 Krakow, ul. Przykladowa 2", 12, 444666888,"stabilny");
	Pacjent P2("Jolanta", "Nowak", "30-000 Krakow, ul. Przykladowa 3", 23, 444666788,"niestabilny", "gruzlica", "w trakcie leczenia", true);
	
	pacjenci.push_back(P1);
	pacjenci.push_back(P2);

	int PESEL;

	bool login_successful = false;
	while (!login_successful)
	{
		cout << "Witaj w systemie elektronicznym przychodni SCAM-MED!" << endl;
		cout << "Logowanie do konta pacjenta:\nProsimy podac swoj numer PESEL:";
		cin >> PESEL;

		auto it = std::find_if(pacjenci.begin(), pacjenci.end(), [&](const Pacjent& p) { return p.get_PESEL() == PESEL; });

		if (it != pacjenci.end())
		{
			// Patient object found
			std::cout << "Znaleziono pacjenta: " << it->get_imie() << " " << it->get_nazwisko() << std::endl;
			login_successful = true;
		}
		else
		{
			// Patient object not found
			std::cout << "Nie znaleziono pacjenta. Prosze sprobowac ponownie!" << std::endl;
			Sleep(1000);
			system("CLS");
		}
	}


	cout << "Wybierz jakie dzialanie chcesz wykonac. Wcisnij odpowiedni numer na klawiaturze: " << endl;
	cout << "1. Przegladnij dostepne terminy wizyt" << endl;
	cout << "2. Zapisz sie na konkretny termin" << endl;
	cout << "3. Anuluj swoja wizyte" << endl;
	cout << "4. Sprawdz swoj status" << endl;
	int input = 0;
	cin >> input;

	switch (input)
	{
	case 1:
		// tutaj nastepuje przegladanie wizyt
		cout << "xd" << endl;
		break;
	case 2:
		//
		break;
	case 3:
		//
		break;
	case 4:
		//
		break;
	default:
		cout << "Wcisnieto niepoprawny klawisz. Prosze sprobowac ponownie!" << endl;
	}
}