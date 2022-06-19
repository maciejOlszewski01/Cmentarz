#pragma once

#include<vector>

#include"Miejsce.h"
#include"Pogrzebanie.h"
#include "Kaplica.h"

class Cmentarz
{

public:
	Cmentarz(Cmentarz const&) = delete;
	void operator=(const Cmentarz&) = delete;
	static Cmentarz& getInstance();
	void DodajMiejsce(Miejsce miejsce);
	void DodajKaplice(Kaplica kaplica);
	Miejsce* wyszukajMiejsce(std::string imie,std::string nazwisko);
	Miejsce* GetMiejsce(int i);
	void PokazListe();
	void SprawdzWaznoscOplat();
protected:
	std::vector<Miejsce> Miejsca;
	std::string lokalizacja;
	std::vector<Kaplica> listaKaplic;
private:
	static Cmentarz* instancja;
	Cmentarz(){};
	//Cmentarz(Cmentarz const&);
	//void operator=(const Cmentarz&);

};

