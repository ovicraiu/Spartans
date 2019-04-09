#include "CBaza.h"
#include <iostream>

using namespace std;

CBaza::CBaza()
{
    cout << "Ctor default CBaza " << endl;
}

CBaza::CBaza(double parDbl):mDbl(parDbl)
{
    cout << "Ctor cu parametru CBaza " << endl;
}


CBaza::~CBaza()
{
    cout << "Dtor CBaza " << endl;
}

void CBaza::Afisez()
{
    cout << " Ai apelat metoda Afisez din clasa de baza " << endl;
}

void CBaza::ScriuText(char* text)
{
    cout << " Ai apelat Metoda ScriuText: " << text << "mDbl= " << mDbl << endl;
}
