#include <iostream>
using namespace std;

class Complex; // Forward Declaration of the Class

class Calculator
{
public:
    int add(int x, int y)
    {
        return x + y;
    }

    int realsum(Complex o1, Complex o2); // Defining the Function
};

class Complex
{
    int a;
    int b;

    friend int Calculator ::realsum(Complex o1, Complex o2); // Individually Declaring other class Functions as Friends

    /* Aliter : friend class Calculator   // Declaring Entire Calculator class as Friend */

public:
    void numbers(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print()
    {
        cout << "The Complex Number is " << a << " + " << b << " i " << endl;
    }
};

int Calculator ::realsum(Complex o1, Complex o2) // Function Definition
{
    return (o1.a + o2.a);
}

int main()
{
    Complex c1, c2; // Creating Complex Class Objects
    c1.numbers(2, 4);
    c1.print();

    c2.numbers(5, 9);
    c2.print();

    Calculator calci; // Creating Calculator class Object
    int result = calci.realsum(c1, c2);
    cout << "The Sum of Real Parts of the Complex Number is " << result;
}