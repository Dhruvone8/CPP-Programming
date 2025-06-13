#include<iostream>
using namespace std;
int main()
{
cout<<"Break:"<<endl;
    for (int i = 1; i < 25; i++)
    {
        cout<<i<<endl;
        if(i == 10)
        {
            break;
        }
    }
cout<<"Continue:"<<endl;
    for (int j = 1; j <= 10; j++)
    {
        if(j == 5)
        {
            continue;
        }
        cout<<j<<endl;
    }
    return 0;
}