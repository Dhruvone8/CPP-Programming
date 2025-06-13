#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Number
{
    public:
        T1 a;
        T2 b;
        T3 c;
    
        Number(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }

        void display()
        {
            cout<<"The Value of a is: "<<a<<endl;
            cout<<"The Value of b is: "<<b<<endl;
            cout<<"The Value of c is: "<<c<<endl;
        }
};

int main()
{
    Number<> n(63,9.4,'D');
    n.display();

    cout<<endl;

    Number<char,char,char> n1('D', 'T', 'H');   // Overriding the default parameters
    n1.display();
    return 0;
}