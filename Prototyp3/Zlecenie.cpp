#include "Zlecenie.h"

Zlecenie::Zlecenie()
{
}

Zlecenie::Zlecenie(const Zlecenie& kopiowany)
{
}

Zlecenie::Zlecenie(int NrKodu, Osoba& osob,tm PlanowanaData)
{
	this->pochowany = &osob;
	this->NrKodu = NrKodu;
	this->PlanowanaDataPochowku = PlanowanaData;

}

Zlecenie Zlecenie::ZlozZlecenie(std::string imie, std::string nazwisko, int dzien, int miesiac, int rok ,int godzina ,int kodZakupu)
{
	tm planowny;
	planowny.tm_year = rok - 1900;
	planowny.tm_mday = dzien;
	planowny.tm_mon = miesiac;
	planowny.tm_hour = godzina;
	Osoba chowany = Osoba(imie, nazwisko);
	return Zlecenie(kodZakupu,chowany,planowny);
}

void Zlecenie::ZrealizujZlecenie(KodZakupu* kod)
{
	Pogrzebanie* pom = new Pogrzebanie(pochowany, kod->getMiejsce());
	kod->getMiejsce()->setCialo(pom);

}


int Zlecenie::getKodZakupu()
{
	return NrKodu;
}
