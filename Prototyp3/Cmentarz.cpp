#include "Cmentarz.h"

Cmentarz& Cmentarz::getInstance()
{
    static Cmentarz instancja;
    return instancja;
}

void Cmentarz::DodajMiejsce(Miejsce miejsce)
{
    Miejsca.push_back(miejsce);
}

Miejsce Cmentarz::wyszukajMiejsce(std::string imie, std::string nazwisko)
{
    for (int i = 0; i < Miejsca.size(); i++) {
        if (Miejsca.at(i).getPogrzebanie()->getOsoba()->getImie() == imie && (Miejsca.at(i).getPogrzebanie()->getOsoba()->getNazwisko() == nazwisko)) {
            return Miejsca.at(i);
        }
    }
    return Miejsce();

    
}
