#include "Pracownik.h"

Pracownik::Pracownik()
{
	ID++;
}

Pracownik::Pracownik(std::string imie, std::string nazwisko, std::string email, int numer, std::string typ, std::string kodAutoryzacyjny)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->Email = email;
	this->numerTelefonu = numer;
	this->typ = typ;
	this->kodAutoryzacyjny = kodAutoryzacyjny;
	idOsoby = ID;
	ID++;
}

Pracownik::Pracownik(const Pracownik& kopiowany)
{
	this->imie = kopiowany.imie;
	this->nazwisko = kopiowany.nazwisko;
	this->Email = kopiowany.Email;
	this->numerTelefonu = kopiowany.numerTelefonu;
	this->typ = kopiowany.typ;
	this->kodAutoryzacyjny = kopiowany.kodAutoryzacyjny;
	idOsoby = kopiowany.idOsoby;
}

std::string Pracownik::getKodAutoryzacyjny()
{
	return kodAutoryzacyjny;
}

std::string Pracownik::getImie()
{
	return imie;
}

std::string Pracownik::getNazwisko()
{
	return nazwisko;
}
