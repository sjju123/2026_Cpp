#include <iostream>
using namespace std;
int globalvar = 10;

void examplefunction(){
    static int localvar = 20;  // 스태틱은 정적 영역 정적은 초기화 x
    localvar++;
    int globalvar = 20;
    cout << localvar << endl;
    // cout << globalvar<<endl;
    // cout << ::globalvar<<endl;
}

int main() {
   int mainvar = 30;
   int globalvar = 20;

   if (true){
    int blockvar = 40;
    int globalvar = 30;
    // cout<< "inside block : blockvar = "<<blockvar <<endl;
    // cout<< "global variable: globalvar = "<<globalvar <<endl;
   }
   //cout<<blockvar;
   examplefunction();
   examplefunction();
   //cout << localvar <<endl;
    //cout<< "global variable: globalvar = "<<::globalvar <<endl;
//    cout<< "main variable: mainvar = "<<mainvar <<endl;


    return 0;
}