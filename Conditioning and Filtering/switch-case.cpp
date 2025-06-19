#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are eligible to drive a car";
        break;

    case 21:
        cout << "You are eligible for marriage";
        break;

    default:
        cout << "No special cases";
        break;
    }
    return 0;
}