#include "Pogrzebanie.h"

Pogrzebanie::Pogrzebanie()
{

}

Pogrzebanie::Pogrzebanie(const Pogrzebanie& kopiowany)
{
	this->Data = kopiowany.Data;
	this->miejsceSpoczynku = kopiowany.miejsceSpoczynku;
	//MOZLIWE ZE JEBNIE NIE MA PRZELADOWANEGO OPERATORA
	this->Pogrzebany = Pogrzebany;

}

Pogrzebanie::Pogrzebanie(Osoba* pogrze, Miejsce* miejsceSpo)
{

	this->Pogrzebany = pogrze;
	this->miejsceSpoczynku = miejsceSpo;

}

Osoba* Pogrzebanie::getOsoba()
{
	return Pogrzebany;
}
