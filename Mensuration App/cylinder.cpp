#include <iostream>

class Cylinder{
    public:

    double CSA(double r, double h){
        double csa = 2*pi*r*h;
        return csa;
    }

    double TSA(double r, double h){
        double tsa = 2*pi*r*(r+h);
        return tsa;
    }

    double VOL(double r, double h) {
        double vol = pi*r*r*h;
        return vol;
    }

};