#include <iostream>
using namespace std;
int main()
{
    // new keyword
    int* p = new int(40); // Dynamic Memory Allocation
    cout << "Value at p is: " << *p << endl;
    cout << "Address: " << p << endl;

    int* arr = new int[3]; // Allocates memory for an array of 3 integers dynamically
    arr[0] = 2;
    arr[1] = 8;
    arr[2] = 7;
    cout << arr[0] << endl;

    // delete keyword
    delete p;           // frees the memory
    cout << *p << endl; // Returns garbage value
    arr = nullptr; // Set the pointer to nullptr to avoid accessing invalid memory
    delete[] arr;
    return 0;
}