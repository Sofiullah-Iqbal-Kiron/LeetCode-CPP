///Accepted.

class Solution
{
public:
    int myAtoi(string s)
    {
        long i = 0, ans = 0;
        bool positive = true, founded = false;
        while (s[i] == ' ' || s[i] == '-' || s[i] == '+' || (s[i] >= '0' && s[i] <= '9'))
        {
            if ((founded && (s[i] == ' ' || s[i] == '-' || s[i] == '+')) || ans > INT_MAX)
            {
                break;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                founded = true;
                ans = ans * 10 + (s[i] - '0');
            }
            else if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
            {
                positive = !positive;
            }
            else if ((s[i] == '-' || s[i] == '+') && !(s[i + 1] >= '0' && s[i + 1] <= '9'))
            {
                return 0;
            }

            i++;
        }

        if (!positive)
        {
            ans *= -1;
            return ans < INT_MIN ? INT_MIN : ans;
        }

        return ans > INT_MAX ? INT_MAX : ans;
    }
};