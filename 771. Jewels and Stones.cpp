///Accepted.

/*
class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        std::set<char> jewels;
        for (char j : J)
        {
            jewels.insert(j);
        }

        int numJewels = 0;
        for (char s : S)
        {
            if (jewels.find(s) != jewels.end())
            {
                numJewels++;
            }
        }

        return numJewels;
    }
};
*/

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int j, s, c = 0;
        for (j = 0; j < J.size(); j++)
        {
            for (s = 0; s < S.size(); s++)
            {
                if (S[s] == J[j])
                {
                    c++;
                }
            }
        }

        return c;
    }
};