#include <iostream>
#include "Secret.h"
#include "CautSecret.h"
#include "ClasaCuPile.h"

using namespace std;

void FctCuPile(Secret s)
{
    s.sI = 1111;
    s.sD = 1.234;
    cout << "Din functia globala prietena: ";
    s.AfisatPrivate();
}

int main()
{
    Secret ss;
    FctCuPile(ss);
    CautSecret cS;
    cS.MetodaCuPile(ss);
    ClasaCuPile cP;
    cP.MetHoata1(ss);
    cP.MetHoata2(ss);
    return 0;
}
