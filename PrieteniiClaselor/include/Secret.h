#ifndef SECRET_H
#define SECRET_H
#include "CautSecret.h"
class ClasaCuPile;

class Secret
{
    public:
        Secret();
        virtual ~Secret();
        friend void FctCuPile(Secret s);
        friend void CautSecret::MetodaCuPile(Secret s);
        friend ClasaCuPile;
    protected:

    private:
        int sI;
        double sD;
        void AfisatPrivate();
};

#endif // SECRET_H
