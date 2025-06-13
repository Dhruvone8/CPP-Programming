// Name of the Constructor should be same as the Class

#include<iostream>
using namespace std;

class Arithmetic
{
    int a, b;
    public:
        Arithmetic(void);   // Constructor Declaration inside the class

        void printResult()
        {
            cout<<"The sum of "<<a<<" and " <<b<< " is "<<a+b<<endl;
        }
};

Arithmetic :: Arithmetic(void)  // It is a default constructor as it takes no Parameters and is defined outisde the class 
{
    a = 15;
    b = 6;
}

int main()
{
    Arithmetic a;
    a.printResult();
    return 0;
}