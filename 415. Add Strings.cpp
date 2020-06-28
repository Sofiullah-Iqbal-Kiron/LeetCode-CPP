class Solution
{
    void Swap(string &s1, string &s2)
    {
        string temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
    }

public:
    string addStrings(string num1, string num2)
    {
        string result;
        if (num1.size() < num2.size())
        {
            Swap(num1, num2);
        }
        int c1, c2, carry = 0, i, demo;
        c1 = num1.size();
        c2 = num2.size();
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for (i = c2; i < c1; i++)
        {
            num2.push_back('0');
        }
        for (i = 0; i < c1; i++)
        {
            demo = (num1[i] - '0') + (num2[i] - '0') + carry;
            result.push_back(demo % 10 + '0');
            carry = demo / 10;
        }
        if (carry)
        {
            result.push_back(carry + '0');
        }
        reverse(result.begin(), result.end());

        return result;
    }
};