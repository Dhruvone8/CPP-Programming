/*
Files can be opened in two ways:
    1. Using the constructor of the fstream class
    2. Using open() function of the class 
*/

#include<iostream>
#include<fstream>  // File Stream Library, which has classes that are used for File Handling Operatons
/*
1. fstream: Used for both read and write operations
2. ifstream: Used only for Reading Operations
3. ofstream: Used only for Writing Operations
*/
using namespace std;

int main()
{
    string s;     // Declaring a string variable to store the content read from the file
    ifstream read("sample.txt");    // Creating an object of input file stream (ifstream) class to read from a file
    read>>s;    // Reads only first word from the file into 's'
    getline(read, s);   // Reads an entire line from the file into 's'
    cout<<s;    // Prints the read content
    return 0;
}

