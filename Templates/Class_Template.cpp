// Templates are used as a blueprint or template for working with different data types in function or classes

#include<iostream>
using namespace std;

template <class T>  // Syntax for creating a class Template. Replace T inplace of every datatype where you want to specify the datatype
class Vector
{
    public:
        T* arr;
        int size;
        
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        
        T dotProduct(Vector v)
        {
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+= this->arr[i] * v.arr[i]; 
            }
        return d;
        }
};

int main()
{
    Vector <int> v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 6;
    v1.arr[2] = 4;

    Vector <int> v2(3);
    v2.arr[0] = 0;
    v2.arr[1] = 2;
    v2.arr[2] = 1;

    int a = v1.dotProduct(v2);
    cout<<"Dot Product: "<<a<<endl;

    Vector <float> v3(3);
    v3.arr[0] = 0.5;
    v3.arr[1] = 1.5;
    v3.arr[2] = 2.5;

    Vector <float> v4(3);
    v4.arr[0] = 0.25;
    v4.arr[1] = 0.75;
    v4.arr[2] = 0;

    float b = v3.dotProduct(v4);
    cout<<"Dot Product: "<<b<<endl;
    return 0;
}