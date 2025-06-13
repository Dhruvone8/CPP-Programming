/* If two Parent Class has the same method name 
and if that method is called using the object of the child class then it raises an ambiguity during runtime */

#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet()
        {
            cout<<"Good Morning!"<<endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout<<"Good Night"<<endl;
        }
};

class Derived : public Base1, public Base2
{
    public:
        void greet()
        {
            Base1 ::greet();     // When greet method is called using the object of the child class then greet method of Base1 will be invoked
        }
};

int main()
{
    Derived d;
    d.greet();
    return 0; 
}