#include "Triunghi.h"
#include "Segment.h"

float Triunghi::PerimetruTriunghi(){
    float perimetru=0;
    for(short i=0;i<3;i++){
        perimetru+=laturi[i].LungimeSegment();
    }
    return perimetru;
}

bool Triunghi::EsteIsoscel(){
    for(short i=0;i<3;i++)
    {
        if (laturi[i].LungimeSegment()==laturi[(i+1)%3].LungimeSegment())
            return true;
    }
    return false;
}

Triunghi::Triunghi()
{
    //ctor
}

Triunghi::~Triunghi()
{
    //dtor
}
