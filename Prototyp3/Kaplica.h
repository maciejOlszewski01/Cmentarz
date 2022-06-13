#pragma once

#include "Oltarz.h"
#include <vector>
class Kaplica
{
public:
	Kaplica();
	Kaplica(const Kaplica& kopiowany);

protected:
	int miejscaOczekujace;
	int id;
	std::vector<Oltarz> listaOltarzy;
};

