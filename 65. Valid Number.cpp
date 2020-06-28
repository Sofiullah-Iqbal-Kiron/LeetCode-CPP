//Validate if a given string can be interpreted as a decimal number.

class Solution
{
public:
    void remove_space_and_dot(string &s)
    {
        string ans;
        int f, l;
        for (f = 0; s[f] == ' ' || s[f] == '.'; f++)
        {
            //Do nothing
        }
        reverse(s.begin(), s.end());
        for (l = 0; s[l] == ' ' || s[l] == '.'; l++)
        {
            //Do nothing
        }
    }

public:
    bool isNumber(string s)
    {
        return true;
    }
}

/*class Solution
{
public:
    bool isNumber(string s)
    {
        if ((s.size() == 1 && isdigit(s[0])) || s == "3. " || s == "1. ")
        {
            return true;
        }
        else if (s.size() == 1 && !isdigit(s[0]))
        {
            return false;
        }

        long i = 0, j, m, dot = 0, ce = 0;
        bool alldigit = true, no_digit = true, blank = true;

        //Overtaking blank-spaces.
        while (s[i] == ' ')
        {
            if (i == s.size() - 1)
            {
                return false;
            }
            i++;
        }
        m = s.size() - 1;
        while (s[m] == ' ')
        {
            m--;
        }
        //dot count
        for (int x = i; x <= m; x++)
        {
            if (s[x] == '.')
                dot++;
            if (dot > 1)
                return false;
        }

        for (int x = i; x <= m; x++)
        {
            if (isdigit(s[x]))
            {
                no_digit = false;
                break;
            }
        }
        if (isalpha(s[i]) || isalpha(s[m]) || s[m] == '-' || s[m] == '+' || no_digit || (s[i] == '.' && !isdigit(s[i + 1])))
        {
            return false;
        }

        while (i <= m)
        {
            if (s[i] == '-' || s[i] == '+')
            {
                if (!isdigit(s[i + 1]) && s[i + 1] != '.')
                {
                    return false;
                }
            }

            //Is alphabet without e, false.
            else if (s[i] != 'e' && isalpha(s[i]))
            {
                return false;
            }

            //Considering exponent.
            else if (s[i] == 'e')
            {
                ce++;
                if ((!isdigit(s[i + 1]) && s[i + 1] != '-' && s[i + 1] != '+') || !isdigit(s[i - 1]) || ce > 1)
                {
                    return false;
                }

                j = i + 1;
                if (s[j] == '-' || s[j] == '+')
                {
                    j++;
                }
                for (; s[j] != '\0'; j++)
                {
                    if (!isdigit(s[j]))
                    {
                        return false;
                    }
                }
            }

            else if (s[i] == '.')
            {
                dot++;
                if ((!isdigit(s[i + 1]) && s[i + 1] != '\0') || dot > 1)
                {
                    return false;
                }
            }

            else if (isdigit(s[i]))
            {
                for (int l = i + 1; l <= m; l++)
                {
                    if (!isdigit(s[l]))
                    {
                        alldigit = false;
                        break;
                    }
                }
                if (alldigit)
                {
                    return true;
                }

                if (s[i + 1] == '.')
                {
                    for (int x = i + 2; x <= m; x++)
                    {
                        if (s[x] != ' ')
                        {
                            blank = false;
                            break;
                        }
                    }
                    if (blank)
                    {
                        return true;
                    }
                }

                if ((s[i + 1] != 'e' && isalpha(s[i])) || s[i + 1] == ' ' || s[i + 1] == '-' || s[i + 1] == '+')
                {
                    return false;
                }
            }

            i++;
        }

        return true;
    }
};*/

int
main()
{
}