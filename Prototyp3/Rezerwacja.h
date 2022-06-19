#pragma once
#include <ctime>
class Klient;
class Oltarz;


class Rezerwacja
{

public:
	Rezerwacja();
	Rezerwacja(const Rezerwacja& kopiowany);
protected:
	tm data;
	int id;
	Oltarz* zarezerwowanyOltarz;
	Klient* rezerwujacy;
};

