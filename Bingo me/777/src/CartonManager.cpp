#include "CartonManager.h"
#include "Carton.h"
#include <fstream>
using namespace std;
CartonManager::CartonManager(int optiune)
{
    for(int index = 0 ; index <= optiune ; index++)
    VectorCartoane.push_back(carton_inject());
}

void CartonManager::Export(ostream& out,int optiune)
{
    int i,y;
    for(i = 0 ; i <= optiune ; i++)
    {
        for(y = 0 ; y <= 14 ; y++)
            if(y==5 || y == 10)
            out << endl;
        out << VectorCartoane[i].Carton_Print(y) << "\t";
    }
    out << endl << endl;
}

Carton CartonManager::carton_inject()
{
    Carton cartonpass;
    return cartonpass;
}

CartonManager::~CartonManager()
{
    //dtor
}
