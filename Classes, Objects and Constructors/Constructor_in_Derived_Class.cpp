#include<iostream>
using namespace std;

class Base1
{
    protected:
        int x;
    
    public:
        Base1(int data1)
        {
            x = data1;
            cout<<"Base1 Constructor Called"<<endl;
            cout<<"The Value of Base1 data is: "<<x<<endl;
        }
};

class Base2
{
    protected:
        int y;

    public:
        Base2(int data2)
        {
            y = data2;
            cout<<"Base2 Constructor Called"<<endl;
            cout<<"The Value of Base2 data is "<<y<<endl;
        }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b)     // Giving 'a' to Base1 Constructor and 'b' to Base2 Constructor
        {
            derived1 = c;
            derived2 = d;
            cout<<"Derived class Constructor Called"<<endl;
        }

        void display(void)
        {
            cout<<"The Value of Derived1 is "<<derived1<<endl;
            cout<<"The Value of Derived2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived d(1,2,3,4);
    d.display();
    return 0;
}