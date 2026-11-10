#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person();
        Person(int age, string name);

        void setage(int age);
        void setname(string name);
        
        int getAge () ;
        string getName();
    

};

Person :: Person () {
    age = 0;
    name = "";
}

Person :: Person (int age, string name)
:age(age),name(name) {
    
}

int Person ::getAge() {
    return age;
}

string Person ::getName() {
    return name;
}

void Person :: setage(int age) {
    this->age = age;
};

void Person :: setname(string name) {
    this->name = name;
};

int main() {
   Person person1;
   cout<<person1.getAge()<<endl;
   cout<<person1.getName()<<endl;

   Person person2(24,"ksw");
   cout<<person2.getAge()<<endl;
   cout<<person2.getName()<<endl;


    person1.setage(24);
    person1.setname("jsj");
    cout<<person1.getAge()<<endl;
    cout<<person1.getName()<<endl;

    return 0;
}