#include "CDerivIar.h"
#include <iostream>

using namespace std;

CDerivIar::CDerivIar()
{
    cout << "Ctor default CDerivIar " << endl;
}

CDerivIar::CDerivIar(double parDbl):CDeriv(parDbl) // leg constructorii intre ei prin contructorul chaining
{
    cout << "Ctor cu parametru CDerivIar " << endl;
}


CDerivIar::~CDerivIar()
{
    cout << "Dtor CDerivIar " << endl;
}
void CDerivIar::Afisez()
{
    cout << " Ai apelat metoda Afisez din clasa CDerivIar " << endl;
    CBaza::ScriuText("Hi pops  ");
}
