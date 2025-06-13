#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter first number: "; // '<<' is Insertion Operator 
    cin>> num1;

    cout<<"Enter second number: "; // '>>' is Extraction Operator
    cin>> num2;

    cout<<"Sum is: "<<num1 + num2<<endl;
    cout<<"Difference is: "<<num1 - num2<<endl;
    cout<<"Product is: "<<num1 * num2<<endl;
    cout<<"Quotient is: "<<num1 /num2<<endl;
    cout << "Remainder is: " << num1 % num2<<endl;
}