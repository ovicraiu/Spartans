#include <iostream>

using namespace std;

class Bz
{
    int mBz;

public:
    Bz(int p):mBz{p}{}
    void Tipareste(){cout << "Bz, mBz = " << mBz << endl;}
    virtual void Dummy(){}

};

class Der1:public Bz
{
    char mD1;
public:
    Der1(char pD, int pB):Bz{pB}, mD1{pD}{}
    void Tipareste(){cout << "mD1, mD1 = " << mD1 << endl;}


};

class Alta{
    int mDa;
    char mCa;
public:
    Alta(int pA, char pCa):mDa{pA}, mCa{pCa}{}
    void Afiseaza(){cout << " Alta, mDa = " << mDa << " mCa = " << mCa << endl;}



};

int main()
{
    double d = 65.999;
    char c = d;
    cout << static_cast<char>(d) << " " << "Val lui c este: " << c << endl;

    Bz obBz{13};
    Der1 obDer1{'1', 21};
    obDer1.Tipareste();

    Bz *pObDer1CastBz = static_cast<Bz*>(&obDer1);
    pObDer1CastBz ->Tipareste();

    Der1 *pObDer1CastDer1 = static_cast<Der1*>(&obBz); //in aranteza e de unde plec(de unde aplic castul)...<aici e ce pointer vreau de tip der1> si fac catre Der1
    pObDer1CastDer1 ->Tipareste();

//    Der1 refObBzCastDer1 = static_cast<Der1&>(obBz);
//    refObBzCastDer1.Tipareste();
    // Intre obiecte nu pot face static cast, doar intre pointeri si referinte

    Bz *pObDer1CastBzDyn = dynamic_cast<Bz*>(&obDer1);
    pObDer1CastBzDyn ->Tipareste();

    Der1 *pObDer1CastDer1Dyn = dynamic_cast<Der1*>(&obBz);
    if(pObDer1CastDer1Dyn != nullptr)
        pObDer1CastDer1Dyn->Tipareste();
    else
        cout << "Bad cast from Bz* to Der1* ! " << endl;

//    Der1& refObBzCastDer1Dyn = dynamic_cast<Der1&>(obBz);
//    refObBzCastDer1Dyn.Tipareste();

cout << "----------------------------------------------"<<endl;

    Alta obAlt{3, 'Z'};
    obAlt.Afiseaza();
    Der1 *pObAltCastDer1RI = reinterpret_cast<Der1*>(&obAlt);
    pObAltCastDer1RI->Tipareste();

    Alta pObAltCastAltaRI = *reinterpret_cast<Alta*>(&obDer1);
    pObAltCastAltaRI.Afiseaza();




    return 0;
}
