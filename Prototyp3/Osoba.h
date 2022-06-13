#include <iostream>
#pragma once
class Osoba
{


public:
	static int ID;
	Osoba();
	Osoba(const Osoba& kopiowana);
	Osoba(std::string imie, std::string nazwisko);
	std::string getImie();
	std::string getNazwisko();
	std::string imie;
	std::string nazwisko;
	int idOsoby;
protected:
	

private:

};

