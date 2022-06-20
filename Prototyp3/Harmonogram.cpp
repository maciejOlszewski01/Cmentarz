#include "Harmonogram.h"

Harmonogram::Harmonogram()
{
}

Harmonogram::Harmonogram(const Harmonogram& kopiowany)
{
	this->daty = kopiowany.daty;
	this->IdHarmonorgamu = kopiowany.IdHarmonorgamu;
	this->wykonanie = kopiowany.wykonanie;
	this->idOsoby = kopiowany.idOsoby;
}

void Harmonogram::Uloz(std::vector<tm> data,int id)
{
	this->wykonanie = false;
	for (int i = 0; i < data.size(); i++) {
		daty.push_back(tm());
		daty.at(i).tm_year =  data.at(0).tm_year;
		daty.at(i).tm_mon = data.at(0).tm_mon;
		if (data.at(0).tm_mday == 1) {
			daty.at(i).tm_mon = data.at(0).tm_mon-1;
		}
		else {
			daty.at(i).tm_mday = data.at(0).tm_mday-1;
		}
		daty.at(i).tm_hour = 7+i;

	}
	this->idOsoby = id;
}

void Harmonogram::Potwierdz()
{
	this->wykonanie = true;
}
