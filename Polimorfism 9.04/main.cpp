#include <iostream>
#include"Vioara.h"
#include"Pian.h"
#include"Flaut.h"
#include "VioaraElectrica.h"
#include "VioaraClasica.h"

using namespace std;

int main()
{
    Instrument*instrV=new Vioara();
    Instrument*instrP=new Pian();
    Instrument*instF=new Flaut();
    instrV->RedaNota();
    instrP->RedaNota();
    instF->RedaNota();
    Vioara*vioaraEl=new VioaraElectrica();
    Vioara*vioaraCl=new VioaraClasica();
    vioaraEl->RedaNota();
    vioaraCl->RedaNota();
    cout << endl << " *** Tablouri de instrumente *** " << endl;
    Instrument listaInstr[5]{*instrV,*instrP,*instF,*vioaraEl,*vioaraCl};
    Instrument *listaPointeri[5]{instrV,instrP,instF,vioaraEl,vioaraCl};
    for(int i=0; i<5; i++)
    {
        listaInstr[i].RedaNota();
        listaPointeri[i]->RedaNota();
    }

    return 0;

}
