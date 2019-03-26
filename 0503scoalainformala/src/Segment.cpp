#include "Segment.h"
#include <cmath>

float Segment::LungimeSegment(){
    return sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
}

Segment Segment::InversulSegmentului(){
    Segment segInv(x1,y1,2*x1-x2,2*y1-y2);
    return segInv;
}

Segment::Segment()
{
    //ctor
}

Segment::Segment(float px1,float py1,float px2,float py2){
    x1=px1;
    y1=py1;
    x2=px2;
    y2=py2;
}

//sau
//Segment::Segment(float px1,float py1,float px2,float py2):x1{px1},x2{px2},y1{py1},y2{py2}
//{}

Segment::~Segment()
{
    //dtor
}
