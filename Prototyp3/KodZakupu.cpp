#include "KodZakupu.h"

KodZakupu::KodZakupu()
{
}

KodZakupu::KodZakupu(const KodZakupu& kopiowany)
{
}

KodZakupu::KodZakupu(int numerKodu, Miejsce* miejsce)
{
	this->numerKodu = numerKodu;
	this->miejsce = miejsce;
	this->Stan = "Wygenerowany";



}

KodZakupu::KodZakupu(int numerKodu)
{
	this->numerKodu = numerKodu;
}

int KodZakupu::getNumerKodu()
{
	return numerKodu;
}

void KodZakupu::setNumerKodu(int i)
{
	this->numerKodu = i;
}

Miejsce* KodZakupu::getMiejsce()
{
	return miejsce;
}
