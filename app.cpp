#include "cle.h"
#include <iostream>
using namespace std;

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