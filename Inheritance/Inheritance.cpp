/* 
Syntax: class {derived_class} : {visibility_mode} {base_class}
1. Private Visibility Mode : Public Members of the base class becomes private members of derived class
2. Public Visibility Mode : Public Members of the base class becomes public members of dervied class
3. Default Visibility Mode is Private 
4. Private Members of the Base class cannot be inherited into derived class
*/

#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
        int id;
        int salary;

        Employee(int Empid)
        {
            id = Empid;
            salary = 100000;
            cout<<"Employee id: "<<Empid<<" and Salary: "<<salary<<endl;
        }
        Employee() {}   // Default Constructor
};

class Programmer : public Employee 
{
    public:
        string language;
        Programmer()
        {
            language = "Cpp";
        }
};

int main()
{
    Employee a(101), b(102);
    Programmer p;
    cout<<p.language;
    return 0;
}

