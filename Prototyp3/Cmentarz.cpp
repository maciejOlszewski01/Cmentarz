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

void Cmentarz::DodajKaplice(Kaplica kaplica)
{
    listaKaplic.push_back(kaplica);
}

Miejsce* Cmentarz::wyszukajMiejsce(std::string imie, std::string nazwisko)
{
    for (int i = 0; i < Miejsca.size(); i++) {
        if ((Miejsca.at(i).getPogrzebanie() != nullptr)) {
            if (Miejsca.at(i).getPogrzebanie()->getOsoba()->getImie() == imie && (Miejsca.at(i).getPogrzebanie()->getOsoba()->getNazwisko() == nazwisko)) {
                return &Miejsca.at(i);
            }
        }
    }
    throw 4;

    
}

Miejsce* Cmentarz::GetMiejsce(int i)
{
    return &Miejsca.at(i);
}

void Cmentarz::PokazListe()
{
    
    std::cout << "\n";
    std::cout << "Imie Nazwisko Sekcja Rzad " << "\n";
    for (int i = 0; i < Miejsca.size(); i++) {
        if (Miejsca.at(i).getPogrzebanie() != nullptr) {
            std::cout << i << " " << Miejsca.at(i).getPogrzebanie()->getOsoba()->getImie() << " "<< Miejsca.at(i).getPogrzebanie()->getOsoba()->getNazwisko() << " " << Miejsca.at(i).getSekcja() << " " << Miejsca.at(i).getRzad() << " " << Miejsca.at(i).getStan() << "\n";
        }
        else {
            std::cout << i << " " << Miejsca.at(i).getSekcja() << " " << Miejsca.at(i).getRzad() << " " << Miejsca.at(i).getStan() << "\n";
        }
    }
    std::cout << "\n";
}

void Cmentarz::SprawdzWaznoscOplat()
{
    for (int i = 0; i < Miejsca.size(); i++) {
        if (Miejsca.at(i).getPogrzebanie() != nullptr) {
            time_t now = time(0);
            struct tm newtime;
            localtime_s(&newtime, &now);
            if (Miejsca.at(i).getWaznosc().tm_year < newtime.tm_year && Miejsca.at(i).getWaznosc().tm_mon < newtime.tm_mon && Miejsca.at(i).getWaznosc().tm_mday < newtime.tm_mday) {
                std::cout << i << " " << Miejsca.at(i).getSekcja() << " " << Miejsca.at(i).getRzad() << "\n";
            }
        }
    }
}
