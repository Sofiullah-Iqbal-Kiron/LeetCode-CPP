///Accepted.

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i, j;
        bool got_it = false;
        vector<int> sol;
        for(i=0; i<nums.size(); i++)
        {
            for(j=i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    got_it=true;
                    sol.push_back(i);
                    sol.push_back(j);
                    break;
                }
            }
            if(got_it==true)
            {
                break;
            }
        }
        return sol;
    }
};

int main()
{

}
