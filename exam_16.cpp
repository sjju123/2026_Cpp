#include <iostream>
using namespace std;
class Circle{
    private:
        double raidus;

    public:
        Circle(double raidus);
        Circle();
        Circle(const Circle& circle);
        ~Circle();

        void setRadius(double raidus); 

        double getRadius () const;
        double getArea() const;
        double getPerimeter() const;

};

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


int main() {
   Circle circle1(5.2);
   cout << "Raidus: " <<circle1.getRadius()<<endl;
   cout << "Area: " <<circle1.getArea()<<endl;
   cout << "Perimeter: " <<circle1.getPerimeter()<<endl;

   Circle circle3;
   circle3.setRadius(3.0);
   cout << "Raidus: " <<circle3.getRadius()<<endl;
   cout << "Area: " <<circle3.getArea()<<endl;
   cout << "Perimeter: " <<circle3.getPerimeter()<<endl;

   Circle circle2(circle1);
   circle3.setRadius(2.5);
   cout << "Raidus: " <<circle2.getRadius()<<endl;
   cout << "Area: " <<circle2.getArea()<<endl;
   cout << "Perimeter: " <<circle2.getPerimeter()<<endl;
    return 0;
}