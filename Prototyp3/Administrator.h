#pragma once
#include "Osoba_Funkcyjna.h"
class Administrator :
    public Osoba_Funkcyjna
{
public:
    Administrator(std::string imie, std::string nazwisko, std::string email, int numer, std::string kodAutoryzacyjny);
    Administrator(const Administrator& kopiowany);
    Administrator();
    std::string getKodAutoryzacyjny();
    std::string getImie();
    std::string getNazwisko();
protected:
    std::string kodAutoryzacyjny;
private:

};

