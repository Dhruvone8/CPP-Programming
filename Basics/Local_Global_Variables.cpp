#include<iostream>
using namespace std;
int a = 18;     // Global Variable
int main()
{
    int a = 19;     // Local Variable
    cout<<"The Local Value of a is "<<a;     // Returns the local value of a
    cout<<"\nThe Global Value of a is "<<::a;     // Returns the Global Value of a
}