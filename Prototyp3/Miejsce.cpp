#include "Miejsce.h"

Miejsce::Miejsce() {

}

std::string Miejsce::getStan()
{
	return Stan;
}

Pogrzebanie* Miejsce::getPogrzebanie()
{
	return ceremonia;
}

Miejsce::Miejsce(const Miejsce& kopiowane)
{
	this->ceremonia = kopiowane.ceremonia;
	this->IdMiejsca = kopiowane.IdMiejsca;
	this->WaznoscOplaty = kopiowane.WaznoscOplaty;
	this->Sekcja = kopiowane.Sekcja;
	this->Rzad = kopiowane.Rzad;
	this->Stan = kopiowane.Stan;


}

Miejsce::Miejsce(Pogrzebanie* ceremonia, int IdMiejsca, tm WaznoscOplaty, std::string Sekcja, std::string Rzad, std::string Stan)
{
	this->ceremonia = ceremonia;
	this->IdMiejsca = IdMiejsca;
	this->WaznoscOplaty = WaznoscOplaty;
	this->Sekcja = Sekcja;
	this->Rzad = Rzad;
	this->Stan = Stan;

}

void Miejsce::ZmienStanMiejsca( std::vector<Miejsce>& spis ,int id, std::string Stan)
{
	for (int i = 0; i < spis.size(); i++)
		if (spis[i].IdMiejsca == id) {
			spis[i].Stan = Stan;
		}
}

