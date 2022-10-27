class Cube{
    public:

    double LSA(double l){
        double lsa = 2*l*(l + l);
        return lsa;
    }

    double TSA(double l){
        double tsa = 2*(l*l + l*l +l*l);
        return tsa;
    }

    double VOL(double l) {
        double vol = l*l*l;
        return vol;
    }

};