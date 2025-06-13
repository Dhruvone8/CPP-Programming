#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if( n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}
int main()
{
    int position;
    cout<<"Enter the position: ";
    cin>>position;
    cout<<"The number at position "<<position<< " of the fibonacci series is "<<fibonacci(position);
    return 0;
}