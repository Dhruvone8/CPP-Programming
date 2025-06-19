#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "You cannot enter this website";
    }
    else if (age == 18)
    {
        cout << "You can enter this website but access to contents are limited";
    }
    else
    {
        cout << "You can enter this website";
    }
    return 0;
}