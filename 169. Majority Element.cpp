#include <bits/stdc++.h>

//Server Solution.
/*
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[nums[i]]++;
        int a;
        for (auto i : m)
        {
            if (i.second > n / 2)
            {
                a = i.first;
                break;
            }
        }
        return a;
    }
};
*/

class Solution
{
    int Count(vector<int> &nums, long long int value, long long int major)
    {
        long long int c = 0;
        for (long long int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == value)
            {
                c++;
                if (c > major)
                {
                    return c;
                }
            }
        }
        return c;
    }

public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int major = nums.size() / 2;
        int pre;
        for (long long int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != pre)
            {
                if (Count(nums, nums[i], major) <= major)
                {
                    pre = nums[i];
                }
                if (nums[i] != pre)
                {
                    if (Count(nums, nums[i], major) > major)
                    {
                        return nums[i];
                    }
                }
            }
        }
        return 0;
    }
};

int main()
{
}