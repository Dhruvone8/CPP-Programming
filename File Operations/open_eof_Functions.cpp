#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f;
    f.open("sample.txt"); // Opening the File using open() function
    f << "Hello World!\n";
    f << "This is C++ Programming";
    f.close();

    ifstream f1;
    f1.open("sample.txt");
    string s;
    while (f1.eof() == 0) // End of File Function eof()
    {
        getline(f1, s);
        cout << s;
        cout << "\n";
    }
}