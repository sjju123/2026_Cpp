#include "cle.h"
#include <iostream>
using namespace std;

Circle :: Circle (double rds)
:  raidus(rds){
    cout<< "The parameter constructor was called." <<endl;
}

Circle :: Circle ()
: raidus (0.0) {
    cout<< "The defalut constructor was called." <<endl;
}

Circle :: Circle (const Circle& circle)
: raidus (circle.raidus) {
    cout<< "The copy constructor was called." <<endl;
}

Circle :: ~Circle() {
    cout<< "The destructor was called for circle with radius";
    cout<< this->raidus<<endl; 
}

inline void Circle :: setRadius(double raidus) {
    this->raidus = raidus;
};

double Circle :: getRadius() const {
    return this-> raidus;
}

double Circle :: getArea() const {
    const double PI = 3.14 ;
    return (PI * raidus * raidus);
}

double Circle :: getPerimeter() const {
    const double PI = 3.14 ; 
    return (2 * PI * raidus);
}