#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;   // Static Variable is shared among all objects of the class and useful in counting the no. of objects created

    public:
        void details(void)
        {
            cout<<"Enter Employee id: "<<endl;
            cin>>id;
            count++;
        }

        void display(void)
        {
            cout<<"Id of the Employee is "<<id<< " and this is the Employee number " <<count<<endl;
        }

        static void getCount(void)      // Static function can access only static members
        {
            cout<<"Count Value is "<<count<<endl;
        }
};

int Employee :: count;      // Initialised to Zero by Default

int main()
{
    Employee a,b,c;
    a.details();
    a.display();
    // a.getCount(); Can also be written like this
    Employee::getCount();

    b.details();
    b.display();
    // b.getCount(); Can also be written Like this
    Employee::getCount();

    c.details();
    c.display();
    // c.getCount(); Can also be written like this
    Employee::getCount();
}