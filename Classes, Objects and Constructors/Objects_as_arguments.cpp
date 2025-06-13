#include<iostream>
using namespace std;

class Complex
{
    int a, b;

    public:
        void numbers(int c1, int c2)
        {
            a = c1;
            b = c2;
        }

        void sum(Complex o1, Complex o2)    // Passing objects as function arguments
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void print()
        {
            cout<<"Complex number is "<<a<<"+" <<b<< "i"<<endl;
        }
};

int main()
{
    Complex C1, C2, C3;
    C1.numbers(2, 4);
    C1.print();
    
    C2.numbers(5, 8);
    C2.print();

    C3.sum(C1, C2);
    C3.print();
}
