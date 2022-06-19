#include "Oltarz.h"

Oltarz::Oltarz() {

}

Oltarz::Oltarz(const Oltarz& kopiowany) {

}

Oltarz::Oltarz(int id, float cena, float powierzchnia, int miejscaSiedzace) {
	this->id = id;
	this->cena = cena;
	this->powierzchnia = powierzchnia;
	this->miejscaSiedzace = miejscaSiedzace;
}