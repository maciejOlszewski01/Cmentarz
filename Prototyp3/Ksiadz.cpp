#include "Ksiadz.h"

Ksiadz::Ksiadz()
{
}

Ksiadz::Ksiadz(std::string imie, std::string nazwisko, std::string email, int numer, std::string parafia)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->numerTelefonu = numer;
	this->parafia = parafia;
	this->Email = email;
	idOsoby = ID;
}

Ksiadz::Ksiadz(const Ksiadz& kopiowany)
{
}
