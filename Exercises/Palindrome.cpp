#include <iostream>
using namespace std;

// leetcode link: https://leetcode.com/problems/palindrome-number

class Solution
{
public:
    bool isPalindrome(int x)
    {
        long original = x;
        long reversed = 0;

        while (x > 0)
        {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        if (original == reversed)
        {
            return true;
        }
        else

        {
            return false;
        }
    }
};

int main()
{
    Solution s;
    int a = 121;
    bool ans = s.isPalindrome(a);
    cout << ans;
}