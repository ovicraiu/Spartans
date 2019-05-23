#ifndef FERMA_H
#define FERMA_H


class Ferma
{
    public:
        Ferma();

         AdaugaAnimaleNoi(int pasari, int patrupede);
         ReduNumarAnimale(int pasari, int patrupede);
         AfiseazaPopulatieFerma();
         AdaugaHranaAnimale(int Fan, int Porum);
         AfiseazaSituatieFerma();

          int  patrupede(int valoarePorci, int valoareOi, int valoareBovine, int valoareCai);
                    void setPorci(int valoarePorci){
                    valoarePorci = porci; }
                    void setOi(int valoareOi){
                    valoareOi = oi; }
                    void setBovine(int valoareBovine){
                    valoareBovine = bovine; }
                    void setCai(int valoareCai){
                    valoareCai = porci; }

           int pasari(int valoareGaste, int valoareGaini, int valoareRate, int valoareCurci);
                    void setGaste(int valoareGaste){
                    valoareGaste = gaste; }
                    void setGaini(int valoareGaini){
                    valoareGaini = gaini; }
                    void setRate(int valoareRate){
                    valoareRate = rate; }
                    void setCurci(int valoareCurci){
                    valoareCurci = curci; }

        virtual ~Ferma();


    protected:

    private:
        int gaste;
        int gaini;
        int rate;
        int curci;
        int porci;
        int oi;
        int bovine;
        int cai;
        int Fan;
        int Porum ;
};

#endif // FERMA_H
