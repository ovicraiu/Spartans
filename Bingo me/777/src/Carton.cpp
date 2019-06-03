#include "Carton.h"

Carton::Carton()
{
    VectorNumere.push_back(GetRandomInt());
    while(VectorNumere.size() != 15)
        {
            unsigned int nrInt = GetRandomInt();
            if(ValidareNumar(nrInt) == true)
                VectorNumere.push_back(nrInt);
                else
                    continue;
        }
    sort(VectorNumere.begin(),VectorNumere.begin() + 15);
}


Carton::~Carton()
{

}

unsigned int Carton::GetRandomInt()
{
    unsigned int nrrand = rand()%100;
        return nrrand;
}

bool Carton::ValidareNumar(unsigned int nrIntVal)
{
    for(int j = 0 ; j <= VectorNumere.size() ; j++)
    {
        if (VectorNumere[j] == nrIntVal)
            return false;
    }
    return true;
}

unsigned int Carton::Carton_Print(int k)
{
        return VectorNumere[k];
}




