#include<iostream>
#include<fstream>  // File Stream Library, which has classes that are used for File Handling Operatons
using namespace std;

int main()
{
    string s = "Hello World!";     // Declaring a string variable to store the content read from the file
    ofstream write("sample.txt");    // Creating an object of output file stream (ofstream) class to write into a file
    write<<s;   // Writes the content stored in variable 's' into the file
    write.close();  // Closing the file

    // Reading the written content from the file
    string s1;
    ifstream read("sample.txt");
    getline(read,s1);
    cout<<"Content in the file: "<<s1;
    return 0;
}
