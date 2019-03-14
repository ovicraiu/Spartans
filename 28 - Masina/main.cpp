#include <iostream>
#include "Masina.h"


using namespace std;

int main()
{
    //pasul 2

    Masina troti;
    troti.SetViteza(220);
    troti.SetAnFabricatie(2015);
    troti.SetCantitateaDeBenzina(25);
    troti.SetRezervor(66);
    troti.SetKilometrajTotal(25000);
    troti.SetKilometrajUltimulPlin(23000);

// pasul 5

    cout <<troti.getKilometrajTotalNou() << endl;
    cout <<troti.getAnFabricatieNou() << endl;

    cout << troti.CalculConsum() << endl;



    return 0;
}
