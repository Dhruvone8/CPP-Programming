#include<iostream>
using namespace std;

class Complex
{
    int real, imaginary;

    public:
        void set(int a, int b)
        {
            real = a;
            imaginary = b;
        }

        void display(void)
        {
            cout<<"The Real Part is: "<<real<<endl;
            cout<<"The Imaginary Part is: "<<imaginary<<endl;
        }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1;     // Stores the address of object c1;
    cout<<"Address of Object c1: "<<ptr<<endl;
    (*ptr).set(2,5);
    (*ptr).display();

    // Creating a object dynamically
    Complex *p = new Complex; 
    cout<<"\nAddress of Object Created Dynamically is: "<<p<<endl;
    (*p).set(1,3);
    (*p).display();

    // Arrow Operator
    p->set(10,3);
    p->display();
    return 0;
}