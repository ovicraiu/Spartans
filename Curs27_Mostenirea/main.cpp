#include <iostream>
#include "CDerivIar.h" // e necesar sa includem doar ultima clasa, deoarece celelalte sunt incluse in ea


using namespace std;

int main()
{
    CBaza baza;
    CDeriv der;
    CDerivIar iar;
    baza.Afisez();
    der.Afisez();
    iar.Afisez();

    CBaza bPar(4.6);
    CDeriv dPar(8.2);
    CDerivIar iPar(9.4);
    bPar.ScriuText("CBaza");
    dPar.ScriuText("CDeriv");
    iPar.ScriuText("CDerivIar");

    cout << "Hello world!" << endl;
    return 0;
}
