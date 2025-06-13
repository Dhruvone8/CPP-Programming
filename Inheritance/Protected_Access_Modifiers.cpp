#include<iostream>
#include<string>
using namespace std;

class Animal
{
    protected:          // Can be accessed by child class but not from outside the class
        string name = "Bruno";
    
    public:
        int age = 7;
        void details()
        {  
            cout<<"Animal's name is "<<name<<" and age is "<<age<<endl;
        }
};

class Dog : public Animal
{
    public:
        void Display()
        {
            details();   
            cout<<"The Animal is a Dog"<<endl;
        }
};

int main()
{
    Dog d;
    d.Display();
    return 0;
}


/*
                        Public Visibility     Private Visibility        Protected Visibility
                        
1. Private Members:     Can't be Inherited    Can't be Inherited        Can't be Inherited
2. Public Members:            Public                 Private                Protected
3. Protected Members        Protected                Private                Protected
*/