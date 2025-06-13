#include<iostream>
using namespace std;

class Arithmetic
{
    int a,b;

    public:
        Arithmetic(int x, int y)        // Declaration and Definition of Constructor inside the class
        {
            a = x;
            b = y;
        }    

        void printResult(void)
        {
            cout<<"The value of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }
};


int main()
{
    Arithmetic a(4,7);  // Implicit Call
    Arithmetic b = Arithmetic(5,9);     // Explicit Call
    a.printResult();
    b.printResult();
    return 0;
}