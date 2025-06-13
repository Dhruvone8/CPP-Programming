#include <iostream>
using namespace std;

// leetcode link: https://leetcode.com/problems/fibonacci-number?envType=problem-list-v2&envId=math
class Solution
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        else
        {
            return fib(n - 1) + fib(n - 2);
        }
    }
};

int main()
{
    Solution s;
    int ans = s.fib(6);
    return 0;
}