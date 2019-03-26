#ifndef SEGMENT_H
#define SEGMENT_H


class Segment
{
    public:
        float LungimeSegment();
        Segment InversulSegmentului();
        float GetX2(){return x2;}
        float GetY2(){return y2;}
        Segment(float,float,float,float);
        Segment();
        virtual ~Segment();
    protected:

    private:
        float x1,y1,x2,y2;
};

#endif // SEGMENT_H
