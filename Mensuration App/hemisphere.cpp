class Hsphere{
    public:

    double CSA(double r){
        double tsa = 3*pi*r*r;
        return tsa;
    }

    double TSA(double r){
        double tsa = 2*pi*r*r;
        return tsa;
    }

    double VOL(double r) {
        double vol = (0.666667)*pi*r*r*r;
        return vol;
    }

};