#include "Triunghi.h"

//Triunghi::Triunghi(Segment s1, Segment s2, Segment s3)
//: laturi{s1, s2, s3}
//{}

Triunghi::Triunghi(Segment s1, Segment s2, Segment s3) {
    laturi[0] = s1;
    laturi[1] = s2;
    laturi[2] = s3;
}

Triunghi::Triunghi(Segment* lista)
: laturi {lista[0], lista[1], lista[2]} {
    delete[] lista;
}

//Triunghi::Triunghi(Segment* lista)
//{
//    for(int i = 0; i < 3; ++i)
//        laturi[i] = lista[i];
//    delete[] lista;
//}

Triunghi::~Triunghi()
{
    //dtor
}

double Triunghi::CalcPerimetru() {
    double per = 0;
    for(int ind = 0; ind < 3; ++ind)
        per+= laturi[ind].LungimeSegm();
    return per;
}

bool Triunghi::EsteIsoscel() {
    for(int i = 0; i < 3; ++i) {
        if(laturi[i].LungimeSegm() == laturi[(i+1)%3].LungimeSegm())
            return true;
    }
    return false;
}
