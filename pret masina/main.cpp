#include <iostream>

using namespace std;

int main()
{
//    unsigned int pret=7000;
//    char raspuns = 'n';
//    cout << " vreti sa adaugati clima ? (d/n)" << endl;
//    cin >> raspuns;
//    if(raspuns=='d')
//    {
//        pret+= 500;
//    }
//    cout << " doriti tractiune pe spate ?" << endl;
//    cin >> raspuns;
//    if(raspuns=='d')
//    {
//        pret+=1000;
//    }
//    cout << " doriti scaune de piele ? " << endl;
//    cin >> raspuns;
//    if(raspuns=='d')
//    {
//        pret+=250;
//    }
//    cout << " doriti 8 boxe ? " << endl;
//    cin >> raspuns;
//    if( raspuns=='d')
//    {
//        pret+=125;
//    }
//    cout << " pret final " << pret << endl;

//unsigned int an=0;
//cout << " introduceti anul de verificat " << endl;
//cin >> an;
//if(an%4 !=0)
//{
//    cout << an << " anul nu este bisect " << endl;
//}
//else
//{
//    if(an%400==0)
//        cout << an << " anul este bisect " << endl;
//    else
//        cout << an << " anul nu este bisect " << endl;
//
//}
unsigned short codAscii=0;
cout << " introduceti codul Ascii(0-127) " << endl;
cin >> codAscii;
if(codAscii<32)
    cout << " caracter neafisabil " << endl;
else
{
    if(codAscii>=97 && codAscii<=122)
        cout << static_cast<char>(codAscii-32);
    else
        cout << static_cast<char>(codAscii);
}







}
