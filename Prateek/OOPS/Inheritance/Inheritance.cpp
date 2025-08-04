#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    void eat(){
        cout << name << " is eating" << endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << name << " is barking" << endl;
    }
};
int main(){
    Dog mydog;
    mydog.name = "Rishu";
    mydog.eat();
    mydog.bark();

    return 0;
}