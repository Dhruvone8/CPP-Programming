/* Union is similar to structs, they have only one key difference: All members share the same memory space
Only one member can hold a value at a time, and the size of the union is determined by the size of its largest member*/

#include <iostream>
using namespace std;

union product
{
    int pizza;
    float milk;
    char fruit;
};

int main()
{
    union product p1;
    p1.pizza = 2;
    p1.milk = 3.5;
    p1.fruit = 'a';
    cout << p1.fruit;
    return 0;
}