#ifndef MASINA_H
#define MASINA_H


class Masina
{


//pasul 1

    private:

        short Viteza;
        short Capacitate;
        short Rezervor;
        short CantitateaDeBenzina;
        float KilometrajTotal;
        float KilometrajUltimulPlin;
        short AnFabricatie;

//pasul 3


        public:
        void SetViteza(short VitezaMaximaNou){Viteza = VitezaMaximaNou;}
        void SetCapacitate(short CapacitateNou){Viteza = CapacitateNou;}
        void SetRezervor(short RezervorNou){Rezervor = RezervorNou;}
        void SetCantitateaDeBenzina(short CantitateaDeBenzinaNou){CantitateaDeBenzina = CantitateaDeBenzinaNou;}
        void SetKilometrajTotal(short KilometrajTotalNou){KilometrajTotal = KilometrajTotalNou;}
        void SetKilometrajUltimulPlin(short KilometrajUltimulPlinNou){KilometrajUltimulPlin = KilometrajUltimulPlinNou;}
        void SetAnFabricatie(short AnFabricatieNou){AnFabricatie = AnFabricatieNou;}
//pasul4
        short getAnFabricatieNou() {return AnFabricatie;}
        short getKilometrajTotalNou() {return KilometrajTotal;}

//pasul 5


    float CalculConsum();


        Masina();
        virtual ~Masina();

    protected:

    private:
};

#endif // MASINA_H
