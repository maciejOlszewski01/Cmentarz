#pragma once
#include "Osoba_Funkcyjna.h"
class Pracownik :
    public Osoba_Funkcyjna
{
    


public:
    Pracownik();
    Pracownik(std::string imie, std::string nazwisko, std::string email, int numer, std::string typ, std::string kodAutoryzacyjny);
    Pracownik(const Pracownik& kopiowany);
    std::string getKodAutoryzacyjny();
    std::string getImie();
    std::string getNazwisko();
protected:
    std::string typ;
    std::string kodAutoryzacyjny;
private:

};

