#include<iostream>
using namespace std;

class College
{
    int id;
    float pointer;

    public:
        void details()
        {
            cout<<"Enter your id and pointer: "<<endl;
            cin>>id>>pointer;
        }

        void display()
        {
            cout<<"Id of the student is "<<id<< " and pointer scored is "<<pointer<<endl;
        }
};

int main()
{
    College VIT[5];  // Array of Objects
    int i;
    for (i = 0; i < 5 ; i++)
    {
        VIT[i].details();
        VIT[i].display();
    }
    cout<<"There are "<<i<< " students in the college"<<endl;
}