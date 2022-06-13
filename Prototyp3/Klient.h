#pragma once
#include "Osoba.h"
#include <vector>
#include "Rezerwacja.h"

class Klient : public Osoba
{
public:
	Klient();
	Klient(const Klient& kopiowany);
protected:
	std::string Email;
	std::vector<Rezerwacja> listaRezerwacjiOltarzy;


};

