#include <iostream>
#include <string>
using namespace std;

struct employee
{
    int empId;
    float salary;
    string role;
};

struct company
{
    int size;
    double turnover;
    string city;
};

int main()
{
    cout << "Employee Details:" << endl;
    struct employee dhruv;
    dhruv.empId = 17;
    dhruv.salary = 90000;
    dhruv.role = "Programmer";

    cout << "The empId of the Employee is: " << dhruv.empId << endl;
    cout << "The Salary  of the Employee is: " << dhruv.salary << endl;
    cout << "The Role of the Employee is: " << dhruv.role << endl;

    cout << "\nCompany Details: " << endl;
    company infosys;
    infosys.size = 500;
    infosys.turnover = 100000;
    infosys.city = "Mumbai";

    cout << "The size of the company is: " << infosys.size << endl;
    cout << "The turnover of the company is: " << infosys.turnover << endl;
    cout << "The location of the company is: " << infosys.city << endl;
    return 0;
}