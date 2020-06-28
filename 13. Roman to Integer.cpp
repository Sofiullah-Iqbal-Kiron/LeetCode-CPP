///Accepted.

class Solution
{
    int value(char ch)
    {
        return ch == 'I' ? 1 : (ch == 'V' ? 5 : (ch == 'X' ? 10 : (ch == 'L' ? 50 : (ch == 'C' ? 100 : (ch == 'D' ? 500 : 1000)))));
    }

public:
    int romanToInt(string s)
    {
        int i, ans = 0, v1, v2;
        for (i = 0; i < s.size() - 1; i++)
        {
            v1 = value(s[i]);
            v2 = value(s[i + 1]);
            ans += (v1 < v2 ? (-1 * v1) : v1);
        }
        ans += (value(s[i]));
        return ans;
    }
};