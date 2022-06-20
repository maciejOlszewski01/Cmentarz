#pragma once
#include "Ulozenie.h"
class Harmonogram
{
public:
	Harmonogram();

	Harmonogram(const Harmonogram& kopiowany);
	void Uloz(std::vector<tm> data,int id);
	std::vector<tm> daty;
	void Potwierdz();
private:
	int idOsoby;
	bool wykonanie;
	int IdHarmonorgamu;
	

};

