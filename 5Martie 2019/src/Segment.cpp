#include "Segment.h"
#include<cmath>
float Segment::LungimeSegment()
{
  return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
 Segment Segment::InversulSegmentului()
 {
     Segment segmentInv;
     segmentInv.x2 = 2*x1-x2;
     segmentInv.y2=2*y1-y2;
     segmentInv.x1=x1;
     segmentInv.y1=y1;
     return segmentInv;
 }







Segment::Segment()
{
    //ctor
}

Segment::~Segment()
{
    //dtor
}
