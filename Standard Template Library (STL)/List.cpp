#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(1);
    list1.push_back(0);

    display(list1);

    // Removing List Elements
    // list1.pop_back();       
    // list1.pop_front();     
    // list1.remove(5);        

    // Reversing the list
    list1.reverse();
    display(list1);

    return 0;
}