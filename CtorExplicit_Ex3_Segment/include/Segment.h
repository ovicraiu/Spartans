#ifndef SEGMENT_H
#define SEGMENT_H


class Segment {
    public:
        float LungimeSegm();
        Segment InversulSegmentului();
        Segment(float, float, float, float);
        Segment();
        float GetX2(){ return x2;}
        float GetY2(){ return y2;}
        virtual ~Segment();
    private:
        float x1, y1, x2, y2;
};

#endif // SEGMENT_H
