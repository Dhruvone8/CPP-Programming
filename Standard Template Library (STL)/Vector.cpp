#include <iostream>
#include <vector> // Vector indexing starts from 0
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Capacity of a vector is twice its size
    vector<int> vec1; // Creation of Vector
    vector<int> vec2(5,1); // Creates a vector containing 5 1s

    int element;
    int size;

    cout << "Enter the size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> element;
        vec1.push_back(element); // Pushes elements from the last
    }

    cout << "Elements in the vector are: ";
    display(vec1);

    cout << "Element at position 4 is: " << vec1.at(4) << endl;

    vector<int>::iterator it = vec1.begin();

    vec1.insert(it, -1); // Inserting 0 at position 1
    cout << "Modified Vector: ";
    display(vec1);

    vec1.insert(it + size + 1, 6); // Inserting 6 at the end
    cout << "Modified Vector: ";
    display(vec1);

    vec1.insert(it, 3, 0); // Inserting 3 copies of 0 at position 1
    cout << "Modified Vector: ";
    display(vec1);

    cout<<"Second Vector: ";
    display(vec2);

    cout<<"Size of 2nd Vector: "<<vec2.size()<<endl;

    cout<<"First element: "<<vec1.front()<<endl;
    cout<<"Last element: "<<vec1.back()<<endl;

    return 0;
}