#include "Ser.h"
#include "Ser.h"

Ser::Ser()
{
    //ctor
}
Ser::Ser(int in1, int in2, char ch, double dd):mint1{in1}, mint2{in2}, mChar{ch}, mDbl{dd}
{
    //ctor
}


Ser::~Ser()
{
    //dtor
}
void Ser::Export(std::ostream& out)
{
    out << mint1 << " " << mint2 << " " << mChar << " " << mDbl;
}
