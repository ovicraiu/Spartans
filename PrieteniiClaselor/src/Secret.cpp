#include "Secret.h"
#include <iostream>

using namespace std;

Secret::Secret()
{
    //ctor
}

Secret::~Secret()
{
    //dtor
}

void Secret::AfisatPrivate()
{
    cout << "sI: " << sI << " sD: " << sD << endl;
}
