// Function Objects (Functor) : A function wrapped in a class so that it is available like an object
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 73, 4, 2, 54, 7};

    cout << "Array elements sorted in ascending order: ";
    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array elements sorted in descnding order: ";
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
