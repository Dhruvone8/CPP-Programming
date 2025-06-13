#include<iostream>
using namespace std;

void func1(int a)
{
    cout<<"This is a normal function and its value is: "<<a<<endl;
}

template <class T>
void func1(T b)
{
    cout<<"Thi is a template function and its value is: "<<b<<endl;
}

int main()
{
    func1(3); // Exacr Match has highest priority
    func1(7.4);
    return 0;
}

