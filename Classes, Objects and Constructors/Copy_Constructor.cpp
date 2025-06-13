#include<iostream>
using namespace std;

class Number
{
    int a;
    public:

        Number() {}

        Number(int num)
        {
            a = num;
        }

        void display(void)
        {
            cout<<"The number is: "<<a<<endl;
        }

        // Compiler makes a default copy constructor of the class and invokes it if no copy constructor is found

        Number(Number &obj)     // Copy Constructor
        {
            cout<<"Copy Constructor Invoked"<<endl;
            a = obj.a;
        }
};

int main()
{   
    Number n1(17), n2(18);
    n1.display();
    n2.display();
    
    Number n3(n1);  // Invoking the copy constructor. It resembles object n1
    n3.display();

    return 0;
}