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
	Miejsce(const Miejsce& kopiowane);
	Miejsce(Pogrzebanie* ceremonia, int IdMiejsca,tm WaznoscOplaty,std::string Sekcja, std::string Rzad, std::string Stan);
	static void ZmienStanMiejsca(std::vector<Miejsce>& spis,int id, std::string Stan);
protected:
	Pogrzebanie* ceremonia;
	int IdMiejsca;
	tm WaznoscOplaty;
	std::string Sekcja;
	std::string Rzad;
	std::string Stan;
};

