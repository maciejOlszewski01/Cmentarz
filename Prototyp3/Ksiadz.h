#include "Osoba_Funkcyjna.h"
#pragma once
class Ksiadz : public Osoba_Funkcyjna
{
public:
	Ksiadz();
	Ksiadz(std::string imie, std::string nazwisko, std::string email,int numer, std::string parafia);
	Ksiadz(const Ksiadz& kopiowany);
protected:
	std::string parafia;
};

