// this pointer points to the object which invokes the member function

#include<iostream>
using namespace std;

class Data
{
    int a;

    public:
        Data& enterData(int a)      // Returns the current object
        {
            this->a = a;
            return *this;
        }

        void display(void)
        {
            cout<<"Address of current object is: "<<this<<endl;
            cout<<"Value of data is: "<<a<<endl;
        }
};

int main()
{
    Data d, d1;
    d.enterData(3).display();
    return 0;
}