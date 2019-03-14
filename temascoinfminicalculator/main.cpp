#include <iostream>
#include "Operatii.h"

using namespace std;

void Meniu();

void Meniu(){
        cout<<"Introduceti operatia pe care doriti sa o aplicati:\n1 Adunare \n2 Scadere \n3 Inmultire \n4 Impartire \n5 Modulo"<<endl;
    }

int main()
{
    Meniu();
    unsigned short optiune=0;
    unsigned int a,b;
    cin>>optiune;
    while(optiune<1 || optiune>5)
    {
        cout<<"Optiune incorecta! Introduceti un numar intreg pozitiv intre 1 si 5."<<endl;
        cin>>optiune;
    }
        cout<<"Introduceti primul numar: "<<endl;
        cin>>a;
        cout<<"Introduceti al doilea numar: "<<endl;
        cin>>b;
        switch(optiune)
        {
            case 1: cout<<"Rezultatul adunarii celor doua numere este: "<<Adunare(a,b)<<endl; break;
            case 2: cout<<"Rezultatul scaderii celor doua numere este: "<<Scadere(a,b)<<endl; break;
            case 3: cout<<"Rezultatul inmultirii celor doua numere este: "<<Inmultire(a,b)<<endl; break;
            case 4: cout<<"Rezultatul impartirii celor doua numere este: "<<Impartire(a,b)<<endl; break;
            case 5: cout<<"Restul impartirii celor doua numere este: "<<Modulo(a,b)<<endl; break;
        }
     return 0;
}

