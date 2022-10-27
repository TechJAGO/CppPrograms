#include <iostream>
#include "constant.h"
#include "cylinder.cpp"
#include "cube.cpp"
#include "cuboid.cpp"
#include "cone.cpp"
#include "sphere.cpp"
#include "hemisphere.cpp"

int main (){

    int x , a;
    double rad,len, br, ht, slen;
    std::cout<< "Kindly tell me...what is that you wish to find? \n Below are the options "<< std::endl;
    std::cout<< "\n 1 - Cube \n 2 - Cuboid \n 3 - Cone \n 4 - Cylinder \n 5 - Hemispere \n 6 - Sphere \n " <<std::endl;
    
    std::cin >> a;
    
    if ( a == 2) {

    if ( a == 2){
    std::cout<< " Enter a number of which you want to the vale of." << std::endl;
    std::cout<< " 1 - Lateral surface area : " << std::endl;
    std::cout<< " 2 - Total surface area : " << std::endl;
    std::cout<< " 3 - Volume : \n" << std::endl;
    
    std::cin >> x;
    
    if (x<=3){
    std::cout<< "Enter values of Length, Breadth, Height.\n" << std::endl;
    std::cout << "Length first and then breadth & height" << std::endl;
    std::cin >> len;
    std::cin >> br;
    std::cin >> ht;
    } 
    }

    Cuboid magnitudecu;

    if (x == 1)
        std::cout<< "Your Lateral surface area is : "<< magnitudecu.LSA(len, br, ht) << std::endl;
    
    if (x == 2)
        std::cout<< "Your Total surface area is : "<< magnitudecu.TSA(len, br, ht) << std::endl;
    
    if (x == 3)
        std::cout<< "Your Volume is : "<< magnitudecu.VOL(len, br, ht) << std::endl;
        
    } 

    if ( a == 1) {

    if ( a == 1 ){
    std::cout<< " Enter a number of which you want to the vale of." << std::endl;
    std::cout<< " 1 - Lateral surface area : " << std::endl;
    std::cout<< " 2 - Total surface area : " << std::endl;
    std::cout<< " 3 - Volume : \n" << std::endl;
    
    std::cin >> x;
    
    if (x<=3){
    std::cout<< "Enter values of Length\n" << std::endl;
    std::cin >> len;
    } 
    }

    Cube magnitudecub;

    if (x == 1)
        std::cout<< "Your Lateral surface area is : "<< magnitudecub.LSA(len) << std::endl;
    
    if (x == 2)
        std::cout<< "Your Total surface area is : "<< magnitudecub.TSA(len) << std::endl;
    
    if (x == 3)
        std::cout<< "Your Volume is : "<< magnitudecub.VOL(len) << std::endl;
        
    }

    if ( a == 3) {
    if ( a == 3 ){
    std::cout<< " Enter a number of which you want to the vale of." << std::endl;
    std::cout<< " 1 - Lateral surface area : " << std::endl;
    std::cout<< " 2 - Total surface area : " << std::endl;
    std::cout<< " 3 - Volume : \n" << std::endl;
    
    std::cin >> x;
    
    if (x<=3){
    std::cout<< "Enter values of Length and radius for Curved and total surface area other wise height and radius.\n" << std::endl;
    } 
    }
    Cone magnitudeco;

    if (x == 1){
        std::cout << "Radius first and then slant height" << std::endl;
        std::cin >> rad;
        std::cin >> slen;
        std::cout<< "Your Curved surface area is : "<< magnitudeco.CSA(rad , slen) << std::endl;
    }
    if (x == 2){
        std::cout << "Radius first and then slant height" << std::endl;
        std::cin >> rad;
        std::cin >> slen;
        std::cout<< "Your Total surface area is : "<< magnitudeco.TSA(rad , slen) << std::endl;
    }
    if (x == 3){
        std::cout << "Radius first and then height" << std::endl;
        std::cin >> rad;
        std::cin >> ht;
        std::cout<< "Your Volume is : "<< magnitudeco.VOL(rad , ht) << std::endl;
    }
    }

    if ( a == 4) {

    if ( a == 4 ){
    std::cout<< " Enter a number of which you want to the value of." << std::endl;
    std::cout<< " 1 - Curved surface area : " << std::endl;
    std::cout<< " 2 - Total surface area : " << std::endl;
    std::cout<< " 3 - Volume : \n" << std::endl;
    
    std::cin >> x;
    
    if (x<=3){
    std::cout<< "Enter values of Radius and Height.\n" << std::endl;
    std::cin >> rad;
    std::cin >> ht;
    } 
    
    Cylinder magnitudecy;

    if (x == 1)
        std::cout<< "Your Curved surface area is : "<< magnitudecy.CSA(rad , ht) << std::endl;
    
    if (x == 2)
        std::cout<< "Your Total surface area is : "<< magnitudecy.TSA(rad , ht) << std::endl;
    
    if (x == 3)
        std::cout<< "Your Volume is : "<< magnitudecy.VOL(rad , ht) << std::endl;
        
    }  
    }

    if ( a == 6 ) {

    if ( a == 6 ){
    std::cout<< " Enter a number of which you want to the value of." << std::endl;
    std::cout<< " 1 - Total surface area : " << std::endl;
    std::cout<< " 2- Volume : \n" << std::endl;
    
    std::cin >> x;
    
    if (x<=2){
    std::cout<< "Enter values of Radius. \n" << std::endl;
    std::cin >> rad;
    } 
    
    Sphere magnitudes;

    if (x == 1)
        std::cout<< "Your Total surface area is : "<< magnitudes.TSA(rad) << std::endl;
    
    if (x == 2)
        std::cout<< "Your Volume is : "<< magnitudes.VOL(rad) << std::endl;
    }  
    }

    if ( a == 5 ) {

    if ( a == 5 ){
    std::cout<< " Enter a number of which you want to the value of." << std::endl;
    std::cout<< " 1 - Curved surface area : " << std::endl;
    std::cout<< " 2 - Total surface area : " << std::endl;
    std::cout<< " 3- Volume : \n" << std::endl;
    
    std::cin >> x;
    
    if (x<=3){
    std::cout<< "Enter values of Radius. \n" << std::endl;
    std::cin >> rad;
    } 
    
    Hsphere magnitudehs;

    if (x == 1)
        std::cout<< "Your Total surface area is : "<< magnitudehs.CSA(rad) << std::endl;
    
    if (x == 2)
        std::cout<< "Your Total surface area is : "<< magnitudehs.TSA(rad) << std::endl;
    
    if (x == 3)
        std::cout<< "Your Volume is : "<< magnitudehs.VOL(rad) << std::endl;
    }  
    
     
    } if (a>6) {
        std::cout<< "Enter valid choice..."<<std::endl;
    }
    return 0;
}