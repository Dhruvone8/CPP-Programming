                        /************************* Reference Variables *********************/

// Reference Variables are an alias for another variable. They provide an alternative name for the same memory location as the original variable
// Syntax: data_type &reference_name = variable_name;

#include<iostream>
using namespace std;

int main()
{
    int a = 18;
    int &b = a;
    cout<<"Value of a is "<<a;
    cout<<"\nValue of a is "<<&b;



                        /************************** Typecasting *********************/



    float x = 9.25;
    cout<<"\nValue of x is "<<x;
    cout<<"\nValue of x is "<<int(x);
}