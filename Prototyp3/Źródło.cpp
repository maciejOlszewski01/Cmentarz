#include <iostream>
#include "Pracownik.h"
#include <vector>
#include "Administrator.h"
//#include "Miejsce.h"
//#include "Pogrzebanie.h"
#include <typeinfo>
#include <tuple>
#include "Cmentarz.h"



std::tuple<Osoba*, int> autoryzuj(std::string kod, std::vector<Pracownik> listaPrac, std::vector<Administrator> listAdm) {
	
	for (int i = 0; i < listaPrac.size(); i++) {
		if (kod == listaPrac[i].getKodAutoryzacyjny()) {
			std::cout << "autoryzowano \n";
			std::cout << listaPrac[i].getImie() << listaPrac[i].getNazwisko() << "\n";
			return { &listaPrac[i],1 };
		}
	}
	for (int i = 0; i < listAdm.size(); i++) {
				if (kod == listAdm[i].getKodAutoryzacyjny()) {
				Administrator Temp = listAdm[i];
				std::cout << "autoryzowano \n";
				std::cout << Temp.getImie() << Temp.getNazwisko() << "\n";
				return { &listAdm[i],0 };
		}
	}
		std::cout << "NIEAUTORYZOWANO";
		throw "aaaaa";
	
}


int main() {

	std::vector<Pracownik> Pracownicy;
	std::vector<Administrator> Admini;
	std::vector<Miejsce> miejsca;

	Miejsce specjalneMiejsce = Miejsce();
	Miejsce* wsknaspecjalnemiejsce = &specjalneMiejsce;
	Pogrzebanie pogrzeb = Pogrzebanie();
	Pogrzebanie* pogrzebWSK = &pogrzeb;
	

	Osoba specjalnaZakopana = Osoba("Tom", "Dom");
	Osoba* wsknazakopana = &specjalnaZakopana;
	tm losowaData{};
	specjalneMiejsce = Miejsce(pogrzebWSK, 6, losowaData, "B", "2e", "Wolne");
	pogrzeb = Pogrzebanie(wsknazakopana, wsknaspecjalnemiejsce);
	

	for (int i = 0; i < 9; i++) {
		miejsca.push_back(Miejsce());
		//Cmentarz::getInstance().DodajMiejsce(Miejsce());
	}

	
	miejsca.push_back(specjalneMiejsce);
	Cmentarz::getInstance().DodajMiejsce(specjalneMiejsce);
	Cmentarz::getInstance().wyszukajMiejsce("Tom","Dom");
	Miejsce::ZmienStanMiejsca(miejsca, 6, "ZOMBIE");
	std::cout << miejsca.at(9).getStan();
	
	for (int i = 0; i < 9; i++) {
		Pracownicy.push_back(Pracownik());
	}
	Pracownicy.push_back(Pracownik("Tomek", "Brzenczek", "Brzenczek@02.pl", 909099090, "Grabarz", "2137"));
	//std::cout << Osoba::ID;

	for (int i = 0; i < 9; i++) {
		Admini.push_back(Administrator());
	}
	Admini.push_back(Administrator("Romek", "Atotemk", "RomekAtomek@02.pl", 909099090, "1337"));
	
	std::string wprowadzonyKod;
	std::cin >> wprowadzonyKod;

	
	auto [uzytkownik, typ] = autoryzuj(wprowadzonyKod, Pracownicy, Admini);
	
	//Cos nie dziala zla alokacja pamieci nie wiem jak to zdowncastowac scastowac
	Pracownik *uzytkown = (Pracownik*)uzytkownik;
	//std::cout << uzytkown->getKodAutoryzacyjny();

	if (typ == 1) {
		while (true) {
			int wyborPierwszy = 0;
			std::cout << "1. Pokaz grafik\n2. Potwierdz Grafik";
			std::cin >> wyborPierwszy;
			switch (wyborPierwszy) {
			case 1:

				break;
			case 2:

				break;

			default:
				std::cout << "cos";
			}
		}
	}
	else {
		while (true) {
			int wyborPierwszy = 0;
			std::cout << "1. Przenies Cialo\n2. Zwolnij miejsce\n3.Sprawdz waznosc oplat\n4.Generuj raport";
			std::cin >> wyborPierwszy;
			switch (wyborPierwszy) {
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			default:
				std::cout << "cos";
			}
		}
	}
}