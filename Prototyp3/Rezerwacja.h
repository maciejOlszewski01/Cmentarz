#pragma once
#include <ctime>
class Klient;
class Oltarz;


class Rezerwacja
{
protected:
	tm data;
	int id;
	Oltarz* zarezerwowanyOltarz;
	Klient* rezerwujacy;
};

