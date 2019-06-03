#ifndef CARTONMANAGER_H
#define CARTONMANAGER_H
#include "Carton.h"
#include <iostream>
using namespace std;

class CartonManager
{
    public:
        CartonManager(int);
        virtual ~CartonManager();
        void genereaza_cartoane(int);
        Carton carton_inject();
        void Export(ostream&,int);

    protected:

    private:
        Carton CartonObj;
        vector <Carton> VectorCartoane;
};

#endif // CARTONMANAGER_H
