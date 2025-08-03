// Example: Interface in C++
#include <iostream>
using namespace std;

// Defining an interface
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

// Implementing the interface in Dog class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

// Implementing the interface in Cat class
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* myDog = new Dog();
    myDog->makeSound();
    
    Animal* myCat = new Cat();
    myCat->makeSound();
    
    delete myDog;
    delete myCat;
    return 0;
}
