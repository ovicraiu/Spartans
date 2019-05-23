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
     //ExecutareMeniu(Meniu);
};



