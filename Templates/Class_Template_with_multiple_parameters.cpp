#include<iostream>
using namespace std;

template <class T1, class T2>   // Can use 'typename' instead of class too
class Data
{
    public:
        T1 data1;
        T2 data2;

        Data(T1 d1, T2 d2)
        {
            data1 = d1;
            data2 = d2;
        }

        void display()
        {
            cout<<data1<<endl;
            cout<<data2<<endl;
        }
};

int main()
{
    Data <int, float> obj(63, 99.99);
    Data <char,double> obj1('D', 9.4);
    obj.display();   
    obj1.display();
    return 0;
}