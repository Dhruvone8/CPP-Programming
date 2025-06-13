#include <iostream>
using namespace std;

int main()
{
  // Pointers are variables that store the memory address of another variable

  int a = 3;
  int* b = &a;
  int** c = &b;
  cout << "Pointers:" << endl;
  cout << "The address at which value of 'a' is stored is: " << b << endl;
  cout << "The value stored at address 'b' is: " << *b << endl; // Dereferencing the pointer
  cout << "The Address at which pointer b is stores is " << c << endl;

  // Creating an Array

  int marks[5] = {56, 77, 76, 69, 94};
  int length = sizeof(marks) / sizeof(marks[0]); // Calculate the array length

  // Pointer Arithmetic

  int* p = marks; // Points to the first element of the array
  cout << "\nPointers and Arrays:" << endl;
  for (int j = 0; j < length; j++) // Pointer Arithmetic to find address and value of array blocks
  {
    cout << "Address of block " << j + 1 << " is: " << p + j << endl;
    cout << "Value at block " << j + 1 << " is: " << *(p + j) << endl;
  }
  return 0;
}
