#include <iostream>
#include "Masina.h"

using namespace std;

int main()
{
    Masina Mercedes;
    Mercedes.SetVitMax(220);
    Mercedes.SetCapacitateRezervor(60);
    Mercedes.SetCantitateBenzina(10);
    Mercedes.SetKilometrajTotal(180.000);
    Mercedes.SetKilometriiUltimPlin(300);
    Mercedes.SetAnFabricatie(1998);


    cout << "An fabricatie: " << Mercedes.GetAnFabric() << endl;
    cout << "Kilometraj total: " << Mercedes.GetKilometrajTotal() << endl;

    cout << "Consum: " << Mercedes.CalculConsum() << endl;

    return 0;

}
