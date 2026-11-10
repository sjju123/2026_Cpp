#include <iostream>
using namespace std;

class Rectangle {
    private:
        int height;
        int width;
    public:
        Rectangle();
        Rectangle(int height,int width);

        void setHeight(int height);
        void setWidth(int width);

        int getHeight();
        int getWidth();

};

Rectangle :: Rectangle() 
:height(1),width(1){
    cout<<"defalt"<<endl;
}

Rectangle :: Rectangle(int height,int width) 
: height(height), width(width){
    
}

int Rectangle :: getHeight() {
    return height;
}

int Rectangle :: getWidth(){
    return width;
};

void Rectangle :: setHeight(int height){
    this->height = height;
}


void Rectangle :: setWidth(int width){
    this->width = width;
}

int main() {
    Rectangle Rectangle1;
    cout<<"Height : "<<Rectangle1.getHeight()<<endl;
    cout<<"Width : "<<Rectangle1.getWidth()<<endl;

    Rectangle Rectangle2(3,3);
    cout<<"Height : "<<Rectangle2.getHeight()<<endl;
    cout<<"Width : "<<Rectangle2.getWidth()<<endl;
    
    Rectangle1.setHeight(3);
    Rectangle1.setWidth(5);
    cout<<"Height : "<<Rectangle1.getHeight()<<endl;
    cout<<"Width : "<<Rectangle1.getWidth()<<endl;

    return 0;
}