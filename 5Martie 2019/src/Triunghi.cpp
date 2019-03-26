#include "Triunghi.h"

float Triunghi::CalcPerimetru()
{
    float per=0;
    for(int i=0 ; i<3; ++i)
        per=per+laturi[i].LungimeSegment();
    return per;
}
bool Triunghi::EsteIsoscel(){
    for(int i=0; i<3; ++i)
    {
        if(laturi[i].LungimeSegment()==laturi[(i+1)%3].LungimeSegment())
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
