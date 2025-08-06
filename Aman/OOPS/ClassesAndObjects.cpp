#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    string name,brand;
public:
    Car(string name,string brand){
        this->name=name;
        this->brand=brand;
    }
    void info(){
        cout<<brand<<' '<<name<<endl;
    }
};

int main(){
    string name,brand;
    cout<<"Enter the Name of the Car: ";
    cin>>name;
    cout<<"Enter the Brand of the Car: ";
    cin>>brand;
    Car car1(name,brand);
    car1.info();
    return 0;
}