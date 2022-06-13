#include "Administrator.h"

Administrator::Administrator(std::string imie, std::string nazwisko, std::string email, int numer, std::string kodAutoryzacyjny)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->Email = email;
	this->numerTelefonu = numer;
	this->kodAutoryzacyjny = kodAutoryzacyjny;
	ID++;
}

Administrator::Administrator(const Administrator& kopiowany)
{
	this->imie = kopiowany.imie;
	this->nazwisko = kopiowany.nazwisko;
	this->Email = kopiowany.Email;
	this->numerTelefonu = kopiowany.numerTelefonu;
	this->kodAutoryzacyjny = kopiowany.kodAutoryzacyjny;
	idOsoby = kopiowany.idOsoby;
}

Administrator::Administrator()
{
	ID++;
}

std::string Administrator::getKodAutoryzacyjny()
{
	return kodAutoryzacyjny;
}

std::string Administrator::getImie()
{
	return imie;
}

std::string Administrator::getNazwisko()
{
	return nazwisko;
}
