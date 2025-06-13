#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base = 1;

        void display(void)
        {
            cout<<"Value of Base Class Variable is: "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived = 2;

        void display(void)
        {
            cout<<"Value of Base Class Variable is: "<<var_base<<endl;
            cout<<"Value of Derived Class variable is: "<<var_derived<<endl;
        }
};

int main()
{   
    BaseClass* BaseClassPointer;    // Pointer Declaration of type BaseClass but not initialised yet
    BaseClass obj_base;
    DerivedClass obj_derived;
    BaseClassPointer = &obj_derived;   // Now the declared pointer of Base Class points to the Object of Derived Class
    BaseClassPointer->display();
    return 0;
}

/* Even if the Base Class Pointer is pointed to the object of the derived class,
It will run the function of the Base Class because it is a pointer of the Base Class.
But using Virtual Functions this problem can be solved
If we make the display function of the base class virtual then the Base Class Pointer will invoke the display function of the Derived c */