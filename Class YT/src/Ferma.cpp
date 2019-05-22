#include "Ferma.h"
#include <iostream>

using namespace std;

Ferma::Ferma()
{
}

Ferma::~Ferma()
{
    //dtor
}

void Ferma::AdaugaAnimaleNoi(){
cout << "Selecteaza una dintre cele doua optiuni: 1 - Pasari; 2 - Patrupede" << endl;
int AnimaleNoi;
cin >> AnimaleNoi;
if (AnimaleNoi = 1){
    printf (" Selectati una dintre optiuni: \n 1 - Gaste \n 2 - Gaini \n 3 - Rate \n 4 - Curci "  );
    int pasari;
    int * pointsArray;
    scanf( " %d " , &pasari);
    pointsArray =  (int * ) malloc(pasari* sizeof (int));
        };
if (AnimaleNoi = 2){
    printf (" Selectati una dintre optiuni: \n 1 - Porci \n 2 - Oi \n 3 - Bovine \n 4 - Cai "  );
    int patrupede;
    int * pointsArray;
    scanf( " %d " , &patrupede);
    pointsArray =  (int * ) malloc(patrupede* sizeof (int));
        };
        cin.get();
}

void Ferma::ReduNumarAnimale(){
cout << "Test Redu Numar Animale" << endl;
    }

void Ferma::AfiseazaPopulatieFerma(){
cout << "Test Afiseaza populatie ferma" << endl;
    }

void Ferma::AdaugaHranaAnimale(){
cout << "Test Adauga Hrana Animale" << endl;
    }

void Ferma::AfiseazaSituatieFerma(){
cout << "Test Afiseaza Situatie Ferma" << endl;

}
