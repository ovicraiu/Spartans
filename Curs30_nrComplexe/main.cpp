#include <iostream>
#include <sstream>
#include <fstream>


using namespace std;

int main()
{
    string a = "1 + 2i", b = "1 + 3i";
    istringstream sa(a), sb(b);
    ostringstream out;
    int ra, ia, rb, ib;
    char buff;
    sa >> ra >>  buff >>  ia;
    sb >> rb >> buff >> ib;

    out << ra * rb-ia*ib << '+' << ra*ib+ia*rb << 'i';
    string result = out.str();
    cout << result;


   // cout << "Hello world!" << endl;
    return 0;
}
