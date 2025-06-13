// Friend Function is not a member of the class but has access to its private members
// Cannot be called by the objects of the Class
// It cannot access the private members of the class directly, need an object to call it, Syntax: Object.member_name

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

        friend Complex Complexsum(Complex o1, Complex o2);    // Declaration of Friend Function

        void print()
        {
            cout<<"Complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex Complexsum(Complex o1, Complex o2)      // Friend Function Definition
{
    Complex temp;                               // Temporary Complex Object
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

int main()
{
    Complex C1, C2, C3;
    C1.numbers(2, 4);
    C1.print();
    
    C2.numbers(5, 8);
    C2.print();

    C3 = Complexsum(C1,C2);
    C3.print();

    return 0;
}
