#ifndef SER_H
#define SER_H
#include "sstream"
#include "iostream"


class Ser
{
    public:
        Ser();
        Ser(int, int, char, double);
        virtual ~Ser();
        void Export(std::ostream&);


    protected:

    private:
        int mint1, mint2;
        char mChar;
        double mDbl;
};

#endif // SER_H
