#include <iostream>
#include "Segment.h"
#include "Triunghi.h"


using namespace std;

int main()
{
    Segment unSegm(0,0,2,2);
    cout<<"Lungimea segmentului unSegm este : "<<unSegm.LungimeSegment()<<endl;
    Segment aldoileaSegment=unSegm.InversulSegmentului();
    cout<<"Inversul segmentului unSegm este : "<<aldoileaSegment.LungimeSegment()<<endl;
    cout<<"x2 = "<<aldoileaSegment.GetX2()<<" "<<"y2 = "<<aldoileaSegment.GetY2()<<endl;
    Segment segMare(aldoileaSegment.GetX2(),aldoileaSegment.GetY2(),unSegm.GetX2(),unSegm.GetY2());
    cout<<"Lungimea segmentului segMare este : "<<segMare.LungimeSegment()<<endl;
//    Triunghi unTriunghi;
//    unTriunghi.laturi[0].x1=0;
//    unTriunghi.laturi[0].y1=0;
//    unTriunghi.laturi[0].x2=0;
//    unTriunghi.laturi[0].y2=1;
//    unTriunghi.laturi[1].x1=0;
//    unTriunghi.laturi[1].y1=0;
//    unTriunghi.laturi[1].x2=1;
//    unTriunghi.laturi[1].y2=0;
//    unTriunghi.laturi[2].x1=1;
//    unTriunghi.laturi[2].y1=1;
//    unTriunghi.laturi[2].x2=0;
//    unTriunghi.laturi[2].y2=0;
//    cout<<"Perimetru triunghiului este : "<<unTriunghi.PerimetruTriunghi()<<endl;
//    if (unTriunghi.EsteIsoscel()==0) cout<<"Triunghiul nu este isoscel."<<endl;
//    else cout<<"Triunghiul este isoscel."<<endl;

    return 0;
}
