class Cuboid{
    public:

    double LSA(double l, double b, double h){
        double lsa = 2*h*(l + b);
        return lsa;
    }

    double TSA(double l, double b , double h){
        double tsa = 2*(l*b + b*h + h*l);
        return tsa;
    }

    double VOL(double l, double b , double h) {
        double vol = l*b*h;
        return vol;
    }

};

