#include <iostream>
using namespace std;

void fun(int x, int y){
    cout<<x+y<<endl;
}

void fun(int x){
    cout<<x<<endl;
}

// int fun(int x){
//     return x;
// }

void fun(int x , double y ) {
    cout<< x*y <<endl;
}


int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    fun(a,b);
    fun(a);
    // c = fun(b);
    fun(3, 4.1);

    return 0;
}