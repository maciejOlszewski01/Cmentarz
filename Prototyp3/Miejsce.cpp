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

std::string Miejsce::getSekcja()
{
	return this->Sekcja;
}

std::string Miejsce::getRzad()
{
	return this->Rzad;
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

void Miejsce::PrzeniesCialo(Miejsce* dokad)
{
	if(dokad->Rzad == ""){
		this->ceremonia = nullptr;
		throw 2;
	}
	time_t now = time(0);
	struct tm newtime;
	localtime_s(&newtime, &now);
	if (dokad->ceremonia == nullptr || (dokad->WaznoscOplaty.tm_year < newtime.tm_year && dokad->WaznoscOplaty.tm_mon < newtime.tm_mon && dokad->WaznoscOplaty.tm_mday < newtime.tm_mday)) {
		dokad->ceremonia = this->ceremonia;
		this->ceremonia = nullptr;
	}
	else {
		throw 3;
	}






}

