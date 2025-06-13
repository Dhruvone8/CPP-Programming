/*
Manipulators are helping functions that can modify the input or output stream. 
They can be included in the I/O statement to alter the format parameters of a stream. 
They are defined inside <iomanip> and some are also defined inside <iostream> header file 

1. endl: Inserts a newline and flushes the output stream
2. setw(x): Sets the width of the next output field to x 
3. setprecision(x): Sets the precision for floating-point numbers to x 
*/

#include<iostream>
#include<iomanip>  
using namespace std;
int main()
{
    int a = 17, b = 18, c = 333;
    float d = 1.58223;
    cout<<"Value of a is "<<setw(4)<<a<<endl; 
    cout<<"Value of b is "<<setw(4)<<b<<endl;
    cout<<"Value of c is "<<setw(4)<<c<<endl;
    cout<<"Value of d is "<<setprecision(3)<<d<<endl;
}