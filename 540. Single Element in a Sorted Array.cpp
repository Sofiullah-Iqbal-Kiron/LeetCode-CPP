///Accepted.

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int i;
        if(nums[0]<nums[1])
        {
            return nums[0];
        }
        for(i=1; i<nums.size()-1; i++)
        {
            if(nums[i-1]<nums[i] && nums[i]<nums[i+1])
            {
                return nums[i];
            }
        }

        return nums[nums.size()-1];
    }
};

int main()
{
    Solution obj;
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    cout << obj.singleNonDuplicate(v);
}

