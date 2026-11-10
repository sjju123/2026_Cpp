#include <iostream>
using namespace std;

int main() {
    int a;
    cin>> a;
        
    for (int i = 0; i<5; i++){
        cout<< a%10;
        a = a / 10;
    }

    return 0;
}