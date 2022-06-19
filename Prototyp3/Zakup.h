#pragma once
#include "Pogrzebanie.h"
class Klient;
class kodZakupu;
class Zakup
{
	Zakup();
	Zakup(const Zakup& kopiowany);
	int idZakupu;
	float oplata;
	int id;
	kodZakupu* zakupione;
	Klient* kupujacy;
};

