#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void makeSound(){
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal{
    public:
    void makeSound() override{
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal{
    public:
    void makeSound() override{
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Outputs: Dog barks
    animal2->makeSound(); // Outputs: Cat meows

    delete animal1;
    delete animal2;

    return 0;
}