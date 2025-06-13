#include<iostream>
using namespace std;

void greet()
{
    cout<<"Hello, Good Morning!";
};

int sum(int a, int b)
{
    int c = a+b;
    return c;
    // a and b are formal parameters
};

int product(int x, int y);  // Function Prototype. Throws error if a function is written after the Main Function

int main()
{
    greet();
    int num1, num2;
    cout<<"\nFor addition:"<<endl;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    cout<<"The sum of " <<num1<< " and " <<num2<< " is " <<sum(num1, num2);
    // num1 and num2 are actual parameters

    cout<<"\nFor Multiplication:"<<endl;
    int number1, number2;
    cout<<"Enter 1st Number: ";
    cin>>number1;
    cout<<"Enter 2nd Number: ";
    cin>>number2;
    cout<<"Product of " <<number1<< " and " <<number2<< " is " <<product(number1,number2);
    return 0;
    // number1 and number2 are actual parameters
}

int product(int x, int y)
{
    int z = x*y;
    // x and y are formal parameters
}

// Same name can be given to Formal and Actual Parameters