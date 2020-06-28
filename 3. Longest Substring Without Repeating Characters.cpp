#include<bits/stdc++.h>
using namespace std;

class Solution
{
    bool isUnique(string s)
    {
        map<char, int> m;
        int i;
        for(i=0; i<s.size(); i++)
        {
            if(m[s[i]] == 1)
            {
                return false;
            }
            m[s[i]]++;
        }
        return true;
    }
public:
    int lengthOfLongestSubstring(string s)
    {
        if(isUnique(s))
        {
            return s.size();
        }
        int ss=0, sl=1, ans=1, i;
        for(i=1; ss < s.size(); sl++)
        {
            if(isUnique(s.substr(ss, sl)))
            {
                if(ans < s.substr(ss, sl).size())
                {
                    ans = s.substr(ss, sl).size();
                }
            }
            else
            {
                ss++;
                sl-=2;
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    cout << obj.lengthOfLongestSubstring("abcabcbb");
}
