#pragma once
#include "Rezerwacja.h"
#include <vector>
class Oltarz
{
	Oltarz();
	Oltarz(const Oltarz& kopiowny);
	Oltarz(int id, float cena, float powierzchnia, int miejscaSiedzace);
protected:
	int id;
	float cena;
	float powierzchnia;
	int miejscaSiedzace;
	std::vector<Rezerwacja> listaRezerwacji;

};

