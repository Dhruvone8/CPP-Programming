#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int>marks;
    marks["Dhruv"] = 90;
    marks["Niraj"] = 85;
    marks["Ayush"] = 92;

    map<string,int> :: iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}