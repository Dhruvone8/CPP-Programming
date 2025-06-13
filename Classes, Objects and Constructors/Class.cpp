#include<iostream>
#include<string>
using namespace std;

class Employee
{
    string profession;

    public:
        void role()                               // Declaring and defining the function in the class itself
        {
            cout<<"Enter your profession: "<<endl;
            cin>>profession;
        };
        void hobby();                            // Declaring the function inside the class and defining it ouside the class

        void Details()                          // Nesting of Member Functions
        {
            role();
            hobby();
        }
};

void Employee :: hobby()                    // Defining the function
{
    string h;
    cout<<"Enter your hobby: "<<endl;
    cin>>h;
}

int main()
{
    Employee e;
    e.Details();
}