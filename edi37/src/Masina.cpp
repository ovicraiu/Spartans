#include "Masina.h"

Masina::Masina()
{
    //ctor
}

Masina::~Masina()
{
    //dtor
}

float Masina::CalculConsum()
{
 return (CapacRezerv-CantitBenz)*100/KilUltimPlin;


}
