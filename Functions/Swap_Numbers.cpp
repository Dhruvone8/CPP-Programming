#include<iostream>
using namespace std;
  
void SwapByRef(int &a, int &b)       // Swapping two numbers using pass-by-reference
{
    int temp = a;
    a = b;
    b = temp;
}

void SwapByPointer(int* x, int* y)      // Swapping two numbers using Pointers
{
    int tempr = *x;
    *x = *y;
    *y = tempr;
}

int main()
{
    cout<<"Swap using Reference Variables:"<<endl;
    int num1 = 5, num2 = 10;
    cout<<"Before swapping:"<<endl;
    cout<<"num1 = "<<num1<< " and num2 = "<<num2<<endl;
    SwapByRef(num1,num2);
    cout<<"After Swapping:"<<endl;
    cout<<"num1 = "<<num1<< " and num2 = "<<num2<<endl;

    int n1 = 20, n2 = 40;
    cout<<"\nSwap using Pointers:"<<endl;
    cout<<"Before Swapping"<<endl;
    cout<<"n1 = "<<n1<< " and n2 = "<<n2<<endl;
    SwapByPointer(&n1,&n2);                         // Pass address of variables
    cout<<"n1 = "<<n1<<" and n2 = "<<n2;
    return 0;
}

