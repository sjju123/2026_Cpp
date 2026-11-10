#pramgma once

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
