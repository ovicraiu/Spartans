#include <iostream>
static int gstatica=100;
extern int vglobala;
using namespace std;
namespace mihai
{
    int var1=26;
}
int main()
{
    int varLocala1=40;
    short varLocala2=50;
    static short varLS=700;
    cout << &vglobala << endl;
    cout << &gstatica << endl;
    cout << &mihai::var1 << endl;
    cout << &varLocala1 << endl;
    cout << &varLocala2 << endl;
    cout << &varLS << endl;


    return 0;
}
