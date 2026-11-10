#include <iostream>
using namespace std;





int main(){
    int a = 1;
    int* ptr_a = &a;
    int b = 2;
    int* ptr_b = &b;

    cout<< a <<endl;
    cout<< *ptr_a <<endl;
    cout<< b <<endl;
    cout<< *ptr_b <<endl;

    int x = *ptr_a + *ptr_b;
    cout<< x <<endl;

    return 0;

}
