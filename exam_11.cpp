#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    int sum=0;
    for (int i = a; i> 0; i--){
        if (a%i==0){
            sum += 1;
        }
    }
    cout<<sum<<endl;

    return 0;
}