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
	static void ZmienStanMiejsca(std::vector<Miejsce>& spis,int id, std::string Stan);
	void PrzeniesCialo(Miejsce* dokad);
	//static void PrzeniesCialo;
protected:
	Pogrzebanie* ceremonia;
	int IdMiejsca;
	tm WaznoscOplaty;
	std::string Sekcja;
	std::string Rzad;
	std::string Stan;
};

