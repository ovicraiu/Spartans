#include <iostream>
#include "Vioara.h"
#include "Pian.h"
#include "Flaut.h"
#include "VioaraElectrica.h"
#include "VioaraClasica.h"


using namespace std;

int main()
{
    /**< Initializare obiecte */

    Instrument* vioara=new Vioara();
    Instrument* pian=new Pian();
    Instrument* flaut=new Flaut();
    Vioara* vioarael=new VioaraElectrica();
    Vioara* vioaracl=new VioaraClasica();

    /**< Apelare */

    vioara->RedaNota();
    pian->RedaNota();
    flaut->RedaNota();
    vioaracl->RedaNota();
    vioarael->RedaNota();

    cout << endl << "***Tablouri de instrumente***" << endl;
    Instrument listaInstr[5]{*vioara,*pian,*flaut,*vioaracl,*vioarael};
    Instrument* pInstr[5]{vioara,pian,flaut,vioaracl,vioarael};

    for(int i=0;i<5;++i)
    {
        pInstr[i]->RedaNota(); /**< Se foloseste polimorfismul pe pointeri */
        listaInstr[i].RedaNota(); /**< Nu se foloseste polimorfismul */
    }
    return 0;
}
