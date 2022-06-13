#pragma once
#include<ctime>
class Miejsce;
class Klient;
class Przedluz
{
protected:
	tm DataOplaty;
	float oplata;
	int id;
	Miejsce* przedluzone;
	Klient* przedluzajacy;
};

