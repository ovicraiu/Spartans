#include "Ferma.h"
#include <iostream>

using namespace std;

void ExecutareMeniu(char Meniu);
void AfisareMeniu();

int main()
{

    AfisareMeniu();
    return 0;
}

void AfisareMeniu (){
char Meniu = -1;
 cout << " Bine ai venit, alege una dintre optiuni: \n " << endl;
     cout << " 1) Adauga animale noi \n " << endl;
     cout << " 2) Redu numar de animale \n " << endl;
     cout << " 3) Afiseaza populatie ferma \n " << endl;
     cout << " 4) Adauga hrana animale \n " << endl;
     cout << " 5) Afiseaza situatie ferma \n " << endl;
     cout << " 0) Iesire " << endl;
     cin >> Meniu ;
     ExecutareMeniu(Meniu);
};


void ExecutareMeniu(char Meniu){
    switch (Meniu){

    case '0' :
     //0 exit program
    break;

    case '1': {
    Ferma animale;
    animale.AdaugaAnimaleNoi();
    }break;

    case '2': {
    Ferma redu;
    redu.ReduNumarAnimale();
    }break;

    case '3':{
    Ferma AfiseazaPopulatie;
    AfiseazaPopulatie.AfiseazaPopulatieFerma();
    }break;

    case '4': {
    Ferma AdaugaHrana;
    AdaugaHrana.AdaugaHranaAnimale();
    }break;

    case '5': {
    Ferma AfiseazaSituatie;
    AfiseazaSituatie.AfiseazaSituatieFerma();
    }break;

        cout << "Introdu o valoare din mesajul afisat \n " << endl;
        AfisareMeniu();

    }
};
