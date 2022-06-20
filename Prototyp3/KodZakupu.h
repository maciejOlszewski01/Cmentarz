#pragma once
#include <ctime>
#include <iostream>

class Miejsce;

class KodZakupu
{

public:
	KodZakupu();
	KodZakupu(const KodZakupu& kopiowany);
	KodZakupu(int numerKodu, Miejsce*);
	KodZakupu(int numerKodu);
	int getNumerKodu();
	void setNumerKodu(int i);
	Miejsce* getMiejsce();
protected:
	tm dataWygnerowania;
	int numerKodu;
	std::string Stan;
	Miejsce* miejsce;


};

