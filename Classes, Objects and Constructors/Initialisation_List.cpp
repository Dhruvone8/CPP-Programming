#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;

    public: 
        Test(int i, int j) : a(i), b(j)     // Assigning values of i and j to a and b respectively
        {
            cout<<"Constuctor Called"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};

int main()
{
    Test t(10,5);
    return 0;
}