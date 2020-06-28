#include <bits/stdc++.h>
using namespace std;

//Time limit exceeded but passed 21 / 21.
/*
class Solution
{
    int Max(vector<pair<int, int>> v)
    {
        int i, max, maxidx;
        max = v[0].second;
        maxidx = 0;
        for (i = 1; i < v.size(); i++)
        {
            if (v[i].second > max)
            {
                max = v[i].second;
                maxidx = i;
            }
        }

        return maxidx;
    }

    bool Pre(int value, vector<pair<int, int>> V)
    {
        int i;
        for (i = 0; i < V.size(); i++)
        {
            if (V[i].first == value)
            {
                return true;
            }
        }
        return false;
    }

public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<pair<int, int>> v;
        vector<int> ans;
        int i, j, curmax, curmaxidx;
        for (i = 0; i < nums.size(); i++)
        {
            if (!Pre(nums[i], v))
            {
                v.push_back({nums[i], 1});
            }
            else
            {
                for (j = 0; j < v.size(); j++)
                {
                    if (v[j].first == nums[i])
                    {
                        v[j].second++;
                        break;
                    }
                }
            }
        }

        for (i = 0; i < k; i++)
        {
            maxidx = Max(v);
            if (v[maxidx].second != 0)
            {
                ans.push_back(v[maxidx].first);
            }
            v[maxidx].second = 0;
        }

        return ans;
    }
};
*/

//Time limit exceeded but passed 19 / 21.
/*
class Solution
{
    vector<int> erase(int value, vector<int> v)
    {
        int i;
        vector<int> ans;
        for (i = 0; i < v.size(); i++)
        {
            if (v[i] != value)
            {
                ans.push_back(v[i]);
            }
        }

        return ans;
    }

public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int j, max, ele, pre;
        vector<int> ans;
        while (ans.size() <= k)
        {
            max = count(nums.begin(), nums.end(), nums[0]);
            ele = nums[0];
            pre = ele;
            for (j = 1; j < nums.size(); j++)
            {
                if (nums[j] != pre && count(nums.begin(), nums.end(), nums[j]) > max)
                {
                    max = count(nums.begin(), nums.end(), nums[j]);
                    ele = nums[j];
                    pre = ele;
                }
            }
            ans.push_back(ele);
            nums = erase(ele, nums);
        }

        return ans;
    }
};
*/

//Again time limit exceeded at 20 / 21.
/*
class Solution
{
    int index(int value, vector< pair<int, int> > V)
    {
        int i;
        for (i = 0; i < V.size(); i++)
        {
            if (V[i].second == value)
            {
                return i;
            }
        }

        return -1;
    }

public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int i, j;
        vector<int> ans;
        vector< pair<int, int> > v;

        //Making hash v.
        for (i = 0; i < nums.size(); i++)
        {
            if (index(nums[i], v) == -1)
            {
                v.push_back({1, nums[i]});
            }
            else
            {
                v[index(nums[i], v)].first++;
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        for (i = 0; i < k; i++)
        {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
*/


///Accepted from my mobile.
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int i;
        vector<int> ans;

        //Creating a hashmap.
        map<int, int> m;
        for (i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }

        map<int, int>::iterator it;

        priority_queue<pair<int, int> > pq;
        for (it = m.begin(); it != m.end(); it++)
        {
            pq.push({it->second, it->first});
        }

        for (i = 0; i < k; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n), ans;
    Solution obj;
    ans = obj.topKFrequent(v, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
