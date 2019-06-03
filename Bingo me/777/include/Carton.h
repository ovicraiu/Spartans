#ifndef CARTON_H
#define CARTON_H
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#define MAX 99

using namespace std;
class Carton
{
    public:
        Carton();//creeaza un carton
        unsigned int GetRandomInt();//Genereaza un int intre [0-99]
        bool ValidareNumar(unsigned int);
        unsigned int Carton_Print(int);
        virtual ~Carton();

    protected:

    private:
        vector <unsigned int> VectorNumere;
};

#endif // CARTON_H
