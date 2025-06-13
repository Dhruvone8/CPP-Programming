#include<iostream>
using namespace std;

class Addition
{
    int a;
    int b;

    public:
        Addition(int x, int y)
        {
            a = x;
            b = y;
        }

        Addition(int x)         // Constructor Overloading
        {
            a = x;
            b = 0;
        }

        void printSum()
        {
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }


};

int main()
{
    Addition a(6,9);
    a.printSum();

    Addition b(10);
    b.printSum();
    return 0;
}