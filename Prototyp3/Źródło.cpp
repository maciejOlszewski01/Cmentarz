#include <iostream>
#include "Pracownik.h"
#include <vector>
#include "Administrator.h"
//#include "Miejsce.h"
//#include "Pogrzebanie.h"
#include <typeinfo>
#include <tuple>
#include "Cmentarz.h"
#include "Zlecenie.h"
#include "KodZakupu.h"
#include "Harmonogram.h"

void wyswietldate(tm data) {
	std::cout << "Rok: " << data.tm_year+1900 << " Miesiac: " << data.tm_mon << " Dzien: " << data.tm_mday << " Godzina " << data.tm_hour + 1 << " Kopanie " << "\n";
}

std::tuple<Osoba*, int> autoryzuj(std::string kod, std::vector<Pracownik>& listaPrac, std::vector<Administrator>&listAdm,int& pomo) {
	
	for (int i = 0; i < listaPrac.size(); i++) {
		if (listaPrac[i].getKodAutoryzacyjny() != "") {
			pomo = pomo + 1;
		}
		if (kod == listaPrac[i].getKodAutoryzacyjny()) {
			return { &listaPrac[i],1 };

		}
	}
	for (int i = 0; i < listAdm.size(); i++) {
				if (kod == listAdm[i].getKodAutoryzacyjny()) {
				Administrator Temp = listAdm[i];
				return { &listAdm[i],0 };
		}
	}
		throw "aaaaa";
	
}


int main() {


	//PREPAROWANIE DANYCH

	std::vector<Pracownik> Pracownicy;
	std::vector<Administrator> Admini;
	std::vector<Miejsce> miejsca;

	Miejsce specjalneMiejsce = Miejsce();
	Miejsce* wsknaspecjalnemiejsce = &specjalneMiejsce;
	Pogrzebanie pogrzeb = Pogrzebanie();
	Pogrzebanie* pogrzebWSK = &pogrzeb;
	Osoba specjalnaZakopana = Osoba("Tom", "Dom");
	Osoba* wsknazakopana = &specjalnaZakopana;
	tm losowaData;
	losowaData.tm_year = 122;
	losowaData.tm_mon = 2;
	losowaData.tm_mday = 10;
	specjalneMiejsce = Miejsce(pogrzebWSK, 8, losowaData, "B", "2e", "Zajete");
	pogrzeb = Pogrzebanie(wsknazakopana, wsknaspecjalnemiejsce);
	miejsca.push_back(specjalneMiejsce);
	Cmentarz::getInstance().DodajMiejsce(specjalneMiejsce);
	for (int i = 0; i < 9; i++) {
		miejsca.push_back(Miejsce());
		//Cmentarz::getInstance().DodajMiejsce(Miejsce());
	}


	Miejsce specjalneMiejsce2 = Miejsce();
	Miejsce* wsknaspecjalnemiejsce2 = &specjalneMiejsce2;
	Pogrzebanie pogrzeb2 = Pogrzebanie();
	Pogrzebanie* pogrzebWSK2 = &pogrzeb2;
	Osoba specjalnaZakopana2 = Osoba("Tomddd", "Dom");
	Osoba* wsknazakopana2 = &specjalnaZakopana2;
	tm losowaData2;
	losowaData2.tm_year = 124;
	losowaData2.tm_mon = 2;
	losowaData2.tm_mday = 10;
	specjalneMiejsce2 = Miejsce(pogrzebWSK2, 6, losowaData2, "L", "2c", "Zajete");
	pogrzeb2 = Pogrzebanie(wsknazakopana2, wsknaspecjalnemiejsce2);
	
	miejsca.push_back(specjalneMiejsce2);
	Cmentarz::getInstance().DodajMiejsce(specjalneMiejsce2);

	Miejsce specjalneMiejsce3 = Miejsce();
	Miejsce* wsknaspecjalnemiejsce3 = &specjalneMiejsce3;
	Pogrzebanie pogrzeb3 = Pogrzebanie();
	Pogrzebanie* pogrzebWSK3 = &pogrzeb3;
	Osoba specjalnaZakopana3 = Osoba("stary", "czlowiek");
	Osoba* wsknazakopana3 = &specjalnaZakopana3;
	tm losowaData3;
	losowaData3.tm_year = 12;
	losowaData3.tm_mon = 2;
	losowaData3.tm_mday = 10;
	specjalneMiejsce3 = Miejsce(pogrzebWSK3, 7, losowaData3, "L", "2c", "Zajete");
	pogrzeb3 = Pogrzebanie(wsknazakopana3, wsknaspecjalnemiejsce3);

	miejsca.push_back(specjalneMiejsce3);
	Cmentarz::getInstance().DodajMiejsce(specjalneMiejsce3);

	tm pusta{};
	Cmentarz::getInstance().DodajMiejsce(Miejsce(nullptr, 10, pusta, "L", "2c", "Wolne"));
	Cmentarz::getInstance().DodajMiejsce(Miejsce(nullptr, 11, pusta, "G", "21c", "Wolne"));
	Cmentarz::getInstance().DodajMiejsce(Miejsce(nullptr, 12, pusta, "L", "21", "Wolne"));
	Cmentarz::getInstance().DodajMiejsce(Miejsce(nullptr, 13, pusta, "L", "24", "Wolne"));
	Cmentarz::getInstance().DodajMiejsce(Miejsce(nullptr, 14, pusta, "R", "2c43", "Wolne"));


	std::vector<KodZakupu> kody;

	kody.push_back(KodZakupu(54545451, Cmentarz::getInstance().GetMiejsce(4)));
	kody.push_back(KodZakupu(54545452, Cmentarz::getInstance().GetMiejsce(5)));
	kody.push_back(KodZakupu(54545453, Cmentarz::getInstance().GetMiejsce(6)));
	
	//Cmentarz::getInstance().wyszukajMiejsce("Tom","Dom");
	std::vector<Zlecenie> Zlecenia;
	Zlecenia.push_back(Zlecenie::ZlozZlecenie("Jan", "Dzban", 5, 10, 2022, 13, 54545451));
	Zlecenia.push_back(Zlecenie::ZlozZlecenie("Jan1", "Dzban1", 5, 10, 2022, 13, 54545452));
	Zlecenia.push_back(Zlecenie::ZlozZlecenie("Jan2", "Dzban2", 5, 10, 2022, 13, 54545453));
	Zlecenia.push_back(Zlecenie::ZlozZlecenie("Jan3", "Dzban3", 5, 10, 2022, 13, 54545454));
	Zlecenia.push_back(Zlecenie::ZlozZlecenie("Jan4", "Dzban4", 5, 10, 2022, 13, 54545455));
	Zlecenia.push_back(Zlecenie::ZlozZlecenie("Jan5", "Dzban5", 5, 10, 2022, 13, 54545456));
	Zlecenia.push_back(Zlecenie::ZlozZlecenie("Jan6", "Dzban6", 5, 10, 2022, 13, 54545457));
	//std::cout << miejsca.at(9).getStan();
	/*
	for (int i = 0; i < Zlecenia.size(); i++) {
		for (int j = 0; j < kody.size(); j++) {
			if (kody.at(j).getNumerKodu() == Zlecenia.at(i).getKodZakupu()) {
				Zlecenia.at(i).ZrealizujZlecenie(&kody.at(j));
			}
		}
	}*/

	tm losowaData4;
	losowaData4.tm_year = 122;
	losowaData4.tm_mon = 5;
	losowaData4.tm_mday = 21;
	
	tm losowaData5;
	losowaData5.tm_year = 122;
	losowaData5.tm_mon = 5;
	losowaData5.tm_mday = 21;
	std::vector<tm> daty;
	daty.push_back(losowaData4);
	daty.push_back(losowaData5);
	
	tm losowaData6;
	losowaData6.tm_year = 122;
	losowaData6.tm_mon = 5;
	losowaData6.tm_mday = 21;

	std::vector<tm> daty2;
	daty2.push_back(losowaData6);

	for (int i = 0; i < 9; i++) {
		Pracownicy.push_back(Pracownik());
	}
	int pomo = -1;
	Pracownicy.push_back(Pracownik("Tomek", "Brzenczek", "Brzenczek@02.pl", 909099090, "Grabarz", "2137"));
	Pracownicy.push_back(Pracownik("Tomek2", "Brzenczek2", "Brzenczek@02.pl", 909099090, "Grabarz", "21374"));
	//std::cout << Osoba::ID;

	for (int i = 0; i < 9; i++) {
		Admini.push_back(Administrator());
	}
	Admini.push_back(Administrator("Romek", "Atotemk", "RomekAtomek@02.pl", 909099090, "1337"));
	
	std::string wprowadzonyKod;
	std::string imie;
	std::string nazwisko;
	Miejsce* pomocnicze;
	Miejsce* pomocnicze2 = new Miejsce();
	Miejsce* pomocnicze3;
	int pomocniczaInt;
	Harmonogram nowy = Harmonogram();
	nowy.Uloz(daty, 9);
	Harmonogram nowy2 = Harmonogram();
	nowy2.Uloz(daty2, 10);
	//wyswietldate(nowy.daty.at(0));

	std::vector<Harmonogram> harmonorgamy;
	harmonorgamy.push_back(nowy);
	harmonorgamy.push_back(nowy2);
	//Cmentarz::getInstance().PokazListe();
	// 
	// 
	// KLIENT 

	


	// 
	// 
	//PRAWDZIWY MAIN

	std::cout << "Podaj kod\n";
	std::cin >> wprowadzonyKod;
	auto [uzytkownik, typ] = autoryzuj(wprowadzonyKod, Pracownicy, Admini,pomo);
	

	if (typ == 1) {
		Pracownik* uzytkown = (Pracownik*)uzytkownik;
		std::cout << "Witaj " << uzytkown->getImie() << " " << uzytkown->getNazwisko() << "\n";
		while (true) {
			int wyborPierwszy = 0;
			std::cout << "1. Pokaz grafik\n2. Potwierdz Grafik\n";
			std::cin >> wyborPierwszy;
			switch (wyborPierwszy) {
			case 1:
				for (int i = 0; i < harmonorgamy.at(pomo).daty.size(); i++) {
					wyswietldate(harmonorgamy.at(pomo).daty.at(i));
				}
				break;
			case 2:
				harmonorgamy.at(pomo).Potwierdz();
				break;

			default:
				break;
			}
		}
	}
	else {
		Administrator* uzytkown = (Administrator*)uzytkownik;
		std::cout << "Witaj " << uzytkown->getImie() << " " << uzytkown->getNazwisko() << "\n";
		while (true) {
			int wyborPierwszy = 0;
			std::cout << "1. Przenies Cialo\n2. Zwolnij miejsce\n3.Sprawdz waznosc oplat\n4.Wyœwietl harmonogramy\n";
			std::cin >> wyborPierwszy;
			switch (wyborPierwszy) {
			case 1:

				std::cout << "Podaj imie osoby ktora chcesz przeniesc\n";
				std::cin >> imie;
				std::cout << "Podaj nazwisko osoby ktora chcesz przeniesc \n";
				std::cin >> nazwisko;
				try {
					pomocnicze = Cmentarz::getInstance().wyszukajMiejsce(imie, nazwisko);
					std::cout << "Czy cia³o ma zostaæ przeniesione poza cmentarz? Tak - 1 Nie - any \n";
					std::cin >> pomocniczaInt;
					if (pomocniczaInt == 1) {
						pomocnicze->PrzeniesCialo(pomocnicze2);
					}
					else {
						std::cout << "Podaj numer miejsca \n";
						std::cin >> pomocniczaInt;
						pomocnicze->PrzeniesCialo((Cmentarz::getInstance().GetMiejsce(pomocniczaInt)));
						Cmentarz::getInstance().PokazListe();
					}

				}
				catch (int e) {
					if (e == 3) {
						std::cout << "Miejsce jest zajête\n\n";
					}
					else if (e == 2) {
						std::cout << "Przeniesiono cia³o\n\n";
						Cmentarz::getInstance().PokazListe();
					}
					else {
						std::cout << "Nie ma takiej osoby\n\n";
					}
				}
				break;
			case 2:
				Cmentarz::getInstance().PokazListe();
				std::cout << "Ktore miejsce chcesz zwolnic\n";
				std::cin >> pomocniczaInt;
				Cmentarz::getInstance().GetMiejsce(pomocniczaInt)->ZmienStanMiejsca("Wolne");
				Cmentarz::getInstance().PokazListe();
				break;
			case 3:
				Cmentarz::getInstance().SprawdzWaznoscOplat();
				break;
			case 4:
				std::cout << "Podaj id Pracownika którego harmonogram chcesz wyœwietliæ\n";
				std::cin >> pomocniczaInt;
				for (int i = 0; i < harmonorgamy.at(pomocniczaInt).daty.size(); i++) {
					wyswietldate(harmonorgamy.at(pomocniczaInt).daty.at(i));
				}
				break;
			default:
				break;
			}
		}
	}
}