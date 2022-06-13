#include "Osoba.h"

int Osoba::ID = 1;

Osoba::Osoba()
{
	ID++;
}

Osoba::Osoba(const Osoba& kopiowana)
{
}

Osoba::Osoba(std::string imie, std::string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

std::string Osoba::getImie()
{
	return imie;
}

std::string Osoba::getNazwisko()
{
	return nazwisko;
}

