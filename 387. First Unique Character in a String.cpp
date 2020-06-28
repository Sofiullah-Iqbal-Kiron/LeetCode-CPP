///Accepted.
//Official approach is: Use HashMap.

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int i, j;
        bool unique=false;
        for(i=0; i<s.size(); i++)
        {
            unique = true;
            for(j=0; j<s.size(); j++)
            {
                if(s[i]==s[j] and i!=j)
                {
                    unique = false;
                    break;
                }
            }
            if(unique==true)
            {
                return i;
            }
        }
        return -1;
    }
};
