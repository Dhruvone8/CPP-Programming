#include<iostream>
using namespace std;

template <class T1, class T2>
float Average(T1 a, T2 b)
{
    return (a+b)/2.0;
}

int main()
{
    float a;
    a = Average(2,10);
    cout<<"Average of 2 and 10 is: "<<a<<endl;
    float b;
    b =  Average(2.5,7.5);
    cout<<"Average of 2.5 and 7.5 is: "<<b<<endl;
    return 0;
}