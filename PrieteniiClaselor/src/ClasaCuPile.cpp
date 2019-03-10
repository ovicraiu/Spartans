#include "ClasaCuPile.h"
#include <iostream>

using namespace std;

ClasaCuPile::ClasaCuPile()
{
    //ctor
}

ClasaCuPile::~ClasaCuPile()
{
    //dtor
}

void ClasaCuPile::MetHoata1(Secret s)
{
    s.sI = 3333;
    s.sD = 3.456;
    cout << "Din metoda 1 a clasei prietene: ";
    s.AfisatPrivate();
}

void ClasaCuPile::MetHoata2(Secret s)
{
    s.sI = 4444;
    s.sD = 4.567;
    cout << "Din metoda 2 a clasei prietene: ";
    s.AfisatPrivate();
}
