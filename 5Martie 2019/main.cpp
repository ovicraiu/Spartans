#include <iostream>
#include "Segment.h"
#include"Triunghi.h"

using namespace std;

int main()
{
    Segment unSegment;
    unSegment.x1=0;
    unSegment.y1=0;
    unSegment.x2=2;
    unSegment.y2=2;
    cout <<" lungimea segmentului = " << unSegment.LungimeSegment() << endl;//se scrie numele obiectului primadata si numele campuluidin cadrul clasei
    Segment segmentNou=unSegment.InversulSegmentului();
    cout << " lungime inversul segmentului " << segmentNou.LungimeSegment() << endl;
    cout << segmentNou.x2<< endl;
    cout << segmentNou.y2 << endl;
    Segment segmentMare;
    segmentMare.x1=unSegment.x2;
    segmentMare.y1=unSegment.y2;
    segmentMare.x2=segmentNou.x2;
    segmentMare.y2=segmentNou.y2;
    cout << " lungime segment Mare = " << segmentMare.LungimeSegment() << endl;
    Triunghi tr;
    tr.laturi[0].x1=0;tr.laturi[0].y1=0;
    tr.laturi[0].x2=0;tr.laturi[0].y2=1;
    tr.laturi[1].x1=1;tr.laturi[1].y1=0;
    tr.laturi[1].x2=0;tr.laturi[1].y2=0;
    tr.laturi[2].x1=1;tr.laturi[2].y1=0;
    tr.laturi[2].x2=0;tr.laturi[2].y2=1;
    cout << " perimetru triunghi= " << tr.CalcPerimetru()<< endl;
    if (tr.EsteIsoscel())//sau se poate scrie(tr.EsteIsoscel()?"":"NU")<<este isoscel"<<endl;

    cout << " este isoscel " << endl;



}
