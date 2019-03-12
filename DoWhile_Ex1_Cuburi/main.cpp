#include <iostream>

using namespace std;

int main()
{
    unsigned short nr = 3;
    do
    {
        cout << "Cubul lui " << nr << " este " << nr*nr*nr <<endl;
        nr+=3;
    } while( nr <= 75);

    return 0;
}
