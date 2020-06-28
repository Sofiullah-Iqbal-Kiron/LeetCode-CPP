///Alhamdulillah Accepted but was not expected.
//This mid level question was accepted in first submission.

#include <bits/stdc++.h>
using namespace std;

/*
 * Definition for singly-linked list.
 * struct ListNode
 * {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void Swap(string &s1, string &s2)
    {
        string temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
    }
    string Add(string s1, string s2)
    {
        int i, demo;
        string result = "";
        if (s1.size() < s2.size())
        {
            Swap(s1, s2);
        }
        int carry = 0, c1 = s1.size(), c2 = s2.size();
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        for(i=c2; i<c1; i++)
        {
            s2.push_back('0');
        }
        for(i=0; i<c1; i++)
        {
            demo=(s1[i]-'0')+(s2[i]-'0')+carry;
            result.push_back(demo%10+'0');
            carry=demo/10;
        }

        if(carry)
        {
            result.push_back(carry+'0');
        }

        return result;
    }
    void append(int value, ListNode **head)
    {
        ListNode *new_node = new ListNode();
        ListNode *last;
        last=*head;
        new_node->val=value;
        new_node->next=NULL;
        if(*head==NULL)
        {
            *head=new_node;
            return;
        }
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=new_node;
        return;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        string s1, s2, ss;
        ListNode *head = NULL;
        while(l1!=NULL)
        {
            s1.push_back(l1->val+'0');
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            s2.push_back(l2->val+'0');
            l2=l2->next;
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        ss=Add(s1, s2);
        for(int i=0; i<ss.size(); i++)
        {
            append((ss[i]-'0'), &head);
        }

        return head;
    }
};

int main()
{
    Solution obj;
}
