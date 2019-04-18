#include "Segment.h"
#include <cmath>

Segment::Segment(float px1, float py1, float px2, float py2):
    x1{px1}, x2{px2}, y1{py1}, y2{py2}
{}

Segment::Segment(){}

float Segment::LungimeSegm() {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

Segment Segment::InversulSegmentului() {
    return Segment{x1, y1, 2 * x1 - x2, 2 * y1 - y2};
}

Segment::~Segment()
{
}
