#pragma once

#include <ctime>
#include "Osoba.h"

class Miejsce;


class Pogrzebanie
{
public:
	Pogrzebanie();
	Pogrzebanie(const Pogrzebanie& kopiowany);
	Pogrzebanie(Osoba* pogrze, Miejsce* miejsceSpo);
	Osoba* getOsoba();
protected:
	tm Data;
	Osoba* Pogrzebany;
	Miejsce* miejsceSpoczynku;
	
};

