#include <iostream>
using namespace std;

class MathOps{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    MathOps math;
    cout << "sum of 2 numbers (5+10) = " << math.add(5,10) << endl;
    cout << "sum of 3 numbers (5+10+15) = " << math.add(5,10,15) << endl;
    return 0;
}
