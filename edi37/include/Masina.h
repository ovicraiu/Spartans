#ifndef MASINA_H
#define MASINA_H


class Masina
{
    public:
        Masina();
        virtual ~Masina();
        void SetVitMax(float vitMax){VitMax = vitMax;}
        void SetCapacitateRezervor(double capRezerv){CapacRezerv = capRezerv;}
        void SetCantitateBenzina (float cantitBenz){CantitBenz = cantitBenz;}
        void SetKilometrajTotal (double kilTotal){KilometrajTotal = kilTotal;}
        void SetKilometriiUltimPlin (double kilUltim){KilUltimPlin = kilUltim;}
        void SetAnFabricatie (short anFab){AnFabric = anFab;}


        short GetAnFabric(){return AnFabric;}
        double GetKilometrajTotal(){return KilometrajTotal;}

        float CalculConsum();

    private:
        float VitMax;
        double CapacRezerv;
        float CantitBenz;
        double KilometrajTotal;
        double KilUltimPlin;
        short AnFabric;



    protected:

    private:
};

#endif // MASINA_H
