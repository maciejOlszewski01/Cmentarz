#pragma once
#include <ctime>
#include <iostream>
#include "Osoba.h"
#include "KodZakupu.h"
#include "Miejsce.h"
#include "Pogrzebanie.h"
class Osoba;
class Dobor;

class Zlecenie
{
public:
	Zlecenie();
	Zlecenie(const Zlecenie& kopiowany);
	Zlecenie(int NrKodu, Osoba& osob , tm PlanowanaData);
	
	static Zlecenie ZlozZlecenie(std::string imie,std::string nazwisko, int dzien, int miesiac,int rok,int godzina,int kodZakupu);
	void ZrealizujZlecenie(KodZakupu* kod);
	int getKodZakupu();
protected:

	int idZlecenia;
	int NrKodu;
	Osoba* pochowany;
	Dobor* dobranie;
	tm dataZlecenia;
	tm PlanowanaDataPochowku;

};

