///Accepted.

#include <bits/stdc++.h>
using namespace std;

///LeetCode official
/*
class Solution
{
public:
    int reverse(int x)
    {
        int res = 0;

        while (x)
        {
            if (res > 0 && res > INT_MAX/10)
                return 0;
            else if (res < 0 && res < INT_MIN/10)
                return 0;

            res *= 10;
            res += (x%10);
            x /= 10;
        }

        return res;
    }
};
*/

///My code
class Solution
{
public:
    long long int num;
    long long int reverse(long long int x)
    {
        long long int rev = 0;
        if (x >= 0)
        {
            while (x > 0)
            {
                rev = rev * 10 + x % 10;
                x /= 10;
            }
            if (rev > 2147483647)
            {
                return 0;
            }
        }
        else
        {
            x *= -1;
            while (x > 0)
            {
                rev = rev * 10 + x % 10;
                x /= 10;
            }
            rev *= -1;
            if (rev < -2147483648)
            {
                return 0;
            }
        }
        return rev;
    }
};

int main()
{
    Solution obj;
    cin >> obj.num;
    cout << obj.reverse(obj.num) << endl;
}
