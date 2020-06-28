///Accepted.

#include <iostream>
using namespace std;

//LeetCode server.
/*
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        long rev = 0, y = x;

        while (y > 0)
        {
            ret = rev * 10 + y % 10;
            y /= 10;
        }

        return rev == x;
    }
};
*/

//My approach
/*
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        else if (x == 0)
        {
            return true;
        }

        long long int rev = 0, num = x;
        while (x > 0)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if (rev == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
*/

//One Cute Solve in Java.
/*
public boolean isPalindrome(int x)
{
    String str = String.valueOf(x);
    int start = 0;
    int end = str.length() - 1;
    while (start < end)
    {
        if (str.charAt(start++) != str.charAt(end--))
            return false;
    }
    return true;
}
*/

///LeetCode Official
//For get rid from int overflow, we just convert the number half
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        int reverted_number = 0;
        while (x > reverted_number)
        {
            reverted_number = reverted_number * 10 + x % 10;
            x /= 10;
        }

        return x == reverted_number || x == reverted_number / 10;
    }
};

int main()
{
    Solution obj;
    cout << obj.isPalindrome(324) << endl;
}