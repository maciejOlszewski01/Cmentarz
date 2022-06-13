#pragma once

#include<vector>

#include"Miejsce.h"
#include"Pogrzebanie.h"

class Cmentarz
{

public:
	Cmentarz(Cmentarz const&) = delete;
	void operator=(const Cmentarz&) = delete;
	static Cmentarz& getInstance();
	void DodajMiejsce(Miejsce);
	Miejsce wyszukajMiejsce(std::string imie,std::string nazwisko);
protected:
	std::vector<Miejsce> Miejsca;
	std::string lokalizacja;
private:
	static Cmentarz* instancja;
	Cmentarz(){};
	//Cmentarz(Cmentarz const&);
	//void operator=(const Cmentarz&);

};

