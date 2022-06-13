#pragma once
#include "Rezerwacja.h"
#include <vector>
class Oltarz
{
	Oltarz();
	Oltarz(const Oltarz& kopiowny);

protected:
	int id;
	float cena;
	float powierzchnia;
	int miejscaSiedzace;
	std::vector<Rezerwacja> listaRezerwacji;

};

