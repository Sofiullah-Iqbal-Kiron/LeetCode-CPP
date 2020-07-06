/// Accepted.
// Ubuntu-Link: https://pastebin.ubuntu.com/p/p8q9fx8G5c/

#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
private:
    string bin(int num)
    {
        string s = "";
        while (num > 0)
        {
            s.push_back((num % 2) + '0');
            num /= 2;
        }
        reverse(s.begin(), s.end());

        return s;
    }

    void fill_both(string &s1, string &s2)
    {
        if (s2.size() < s1.size())
            swap(s1, s2);
        reverse(s1.begin(), s1.end());
        for (int i = s1.size(); i < s2.size(); i++)
        {
            s1 += '0';
        }

        reverse(s1.begin(), s1.end());
    }

    int bit_diff(string s1, string s2)
    {
        int i, diff = 0;
        for (i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                diff++;
            }
        }

        return diff;
    }

public:
    int hammingDistance(int x, int y)
    {
        string bx, by;
        bx = bin(x);
        by = bin(y);
        fill_both(bx, by);
        return bit_diff(bx, by);
    }
};

int main()
{
    Solution obj;
    obj.hammingDistance(1, 4);
}