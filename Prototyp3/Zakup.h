#pragma once
#include "Pogrzebanie.h"
class Miejsce;
class Klient;
class Zakup
{
	Zakup();
	Zakup(const Zakup& kopiowany);
	int idZakupu;
	float oplata;
	int id;
	Miejsce* zakupione;
	Klient* kupujacy;
};

