#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1 or n ==0)
    {
        return 1;
    }
    else return n * factorial(n-1);
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The Factorial of "<<num<< " is " <<factorial(num);
}