#ifndef TRIUNGHI_H
#define TRIUNGHI_H
#include "Segment.h"

class Triunghi
{
    public:
        Triunghi(Segment,Segment,Segment);
        Triunghi(Segment*);
        virtual ~Triunghi();
        double CalcPerimetru();
        bool EsteIsoscel();
        bool EsteEchilateral();
    private:
        Segment laturi[3];
};

#endif // TRIUNGHI_H
