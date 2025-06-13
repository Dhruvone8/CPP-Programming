// Arrays

#include<iostream>
using namespace std;
int main()
{
    cout<<"\nArrays of Marks:"<<endl;
    int marks[5] = {56, 77, 76, 69, 94};
    int length = sizeof(marks) / sizeof(marks[0]); // Calculate the array length

    for (int i = 0; i < length; i++)
    {
        cout<<"Marks at position "<< i <<" is: " << marks[i] << endl;
    }
    return 0;
}
