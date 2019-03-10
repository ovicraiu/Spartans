#include "Secret.h"
#include "CautSecret.h"
#include <iostream>

using namespace std;

CautSecret::CautSecret()
{
    //ctor
}

CautSecret::~CautSecret()
{
    //dtor
}

void CautSecret::MetodaCuPile(Secret s)
{
    s.sI = 2222;
    s.sD = 2.345;
    cout << "Din metoda prietena: ";
    s.AfisatPrivate();
}
