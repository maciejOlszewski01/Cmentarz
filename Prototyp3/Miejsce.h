#pragma once
#include <iostream>
#include <vector>
class Pogrzebanie;

class Miejsce
{
public:
	Miejsce();
	std::string getStan();
	Pogrzebanie* getPogrzebanie();
	std::string getSekcja();
	std::string getRzad();
	Miejsce(const Miejsce& kopiowane);
	Miejsce(Pogrzebanie* ceremonia, int IdMiejsca,tm WaznoscOplaty,std::string Sekcja, std::string Rzad, std::string Stan);
	void ZmienStanMiejsca( std::string Stan);
	void PrzeniesCialo(Miejsce* dokad);
	tm getWaznosc();
	void setCialo(Pogrzebanie* osoba);
	
	Miejsce* SprawdzWaznoscOplat();
	//void SetPogrzebanie(Pogrzebanie* pogrzebana);
	//static void PrzeniesCialo;
protected:
	Pogrzebanie* ceremonia;
	int IdMiejsca;
	tm WaznoscOplaty;
	std::string Sekcja;
	std::string Rzad;
	std::string Stan;
};

