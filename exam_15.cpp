#include <iostream>
using namespace std;

class Circle{
    private:
        double raidus;

    public:
        Circle() ;
        Circle(double raidus);

        void setRadius (double raidus);
       
        double getRadius () const;
        double getArea () const;
        double getPerimeter () const;
        
};

Circle :: Circle() 
 : raidus (0.0) {
    cout<<"Default Constructoer"<<endl;
}

Circle :: Circle(double rds) 
 : raidus (rds) {
    cout<<"The parameter cinstructor"<<endl;
}

void Circle :: setRadius (double value) {
    raidus = value;
}

double Circle :: getRadius ()  const{
    return raidus;
} 

double Circle :: getArea ()  const{
    const double PI = 3.14;
    
    return (PI * raidus * raidus);
} 

double Circle :: getPerimeter ()  const{
    const double PI = 3.14;
    
    return (2 * PI * raidus);
} 

int main() {
   Circle circle1 (5.2);

   cout<<"Radius: "<<circle1.getRadius()<<endl;
   cout<<"Area: "<<circle1.getArea()<<endl;
   cout<<"Perimeter: "<<circle1.getPerimeter()<<endl;


   Circle circle3;

   cout<<"Radius: "<<circle3.getRadius()<<endl;
   cout<<"Area: "<<circle3.getArea()<<endl;
   cout<<"Perimeter: "<<circle3.getPerimeter()<<endl;
    return 0;
}