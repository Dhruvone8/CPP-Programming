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
    // Array of objects using pointers
    College *ptr = new College[3];
    College *ptrTemp = ptr;             // Creating a Temporary pointer same as ptr
    int i;
    for (i = 0; i < 3; i++)
    {
        ptr->details();
        ptr++;                      
    }
    
    /* At the end of the 1st loop the ptr points to a different memory address,
    But in 2nd loop we need ptr to point to the address of 1st object and hence we created ptrTemp same as ptr */
        
    for (i = 0; i < 3; i++)
    {
        ptrTemp->display();
        ptrTemp++;
    }
    return 0;
 }