#include <fstream>
#include "Carton.h"
#include "CartonManager.h"
using namespace std;
int optiune;
void menu()
{
    cout << "1 Genereaza cartoane de bingo" << endl;
    cout << "2 Afiseaza cartoanele de bingo participante" << endl;
    cout << "3 Porneste jocul de bingo" << endl;
    cout << "4 Iesire";
}

void input()
{
    cout << "Dati optiunea";
    cin >> optiune;
}

int main()
{
    srand(time(NULL));
    ofstream outFisBingo("BINGO.txt");
    menu();
    cout << endl << endl;
    input();
    cout << endl;
    //input();
    /*switch(optiune)
    {
    case 1: cout << "Genereaza o serie noua de cartoane" << endl << "Adauga la seria existenta de cartoane";
    }*/
    CartonManager ob1(optiune);
    ob1.Export(outFisBingo,optiune);
    return 0;
}
