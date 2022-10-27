#include <iostream>
#include "constant.h"
class Cone{
    public:

    double CSA(double r, double sl){
        double csa = pi*r*sl;
        return csa;
    }

    double TSA(double r, double sl){
        double tsa = pi*r*(r+sl);
        return tsa;
    }

    double VOL(double r, double h) {
        double vol = 0.3333*pi*r*r*h;
        return vol;
    }

};