#include <iostream>
#include "Segment.h"
#include "Triunghi.h"
using namespace std;

int main()
{
    Segment unSegm{0, 0, 2, 2};
    cout << "Lung segm:" << unSegm.LungimeSegm() << endl;
    Segment segmInvers = unSegm.InversulSegmentului();
    cout << "Lung segm invers:" << segmInvers.LungimeSegm() << endl;
    cout << "X2-ul segm invers:" << segmInvers.GetX2() << endl;
    cout << "Y2-ul segm invers:" << segmInvers.GetY2() << endl;

    Segment segmMare{segmInvers.GetX2(), segmInvers.GetY2(), unSegm.GetX2(), unSegm.GetY2()};

    cout << "Lung segm mare:" << segmMare.LungimeSegm() << endl;

    Triunghi tr{ Segment{0,0,0,1}, Segment{0,1,1,1}, Segment{1,1,0,0} };
    cout << tr.CalcPerimetru() << endl;
    cout << (tr.EsteIsoscel() ? "" : "Nu ") << "este isoscel" << endl;

    Triunghi trA{ new (Segment[3]){Segment{0,0,0,1},
                                   Segment{0,1,1,1},
                                   Segment{1,1,0,0} } };
    cout << trA.CalcPerimetru() << endl;
    cout << (trA.EsteIsoscel() ? "" : "Nu ") << "este isoscel" << endl;
    return 0;
}
