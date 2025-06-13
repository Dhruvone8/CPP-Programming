#include<iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout<<"Animal Eats Food for Energy"<<endl;
        }
};

class Dog : public Animal
{
    public:
        void sound()
        {
            cout<<"Dog Barks"<<endl;
        }
};

int main()
{
    Dog d;
    d.eat();
    d.sound();
    return 0;
}