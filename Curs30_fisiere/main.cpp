#include <iostream>
#include "Ser.h"
#include <fstream>

using namespace std;

int main()
{
    Ser o1{1,11,'A',0.1}, o2{2,22,'B',0.5}, o3{3,33,'C',0.6}, o4{4,44,'D',0.7};
    ofstream outFisOb("fisierr.txt");
    o1.Export(outFisOb);
    outFisOb << endl;
    o2.Export(outFisOb);
    outFisOb << endl;
    o3.Export(outFisOb);
    outFisOb << endl;
    o4.Export(outFisOb);

    cout << "Hello world!" << endl;
    return 0;
}
