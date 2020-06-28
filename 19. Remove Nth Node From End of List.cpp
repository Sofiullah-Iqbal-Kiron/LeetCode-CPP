///Accepted.

#include<bits/stdc++.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class ListNode
{
public:
    int val;
    ListNode *next;
};

class Solution
{
    int Length(ListNode *head)
    {
        int c = 0;
        while (head != NULL)
        {
            c++;
            head = head->next;
        }

        return c;
    }

    void popfront(ListNode **head)
    {
        ListNode* temp = *head;
        *head = temp->next;
        delete temp;
    }

public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int delete_index = Length(head) - n;
        ListNode* pre=head;
        ListNode* cur=head->next;
        if(delete_index==0)
        {
            popfront(&head);
            return head;
        }
        else if(delete_index<0)
        {
            return 0;
        }
        for(int i=1; i<Length(head); i++)
        {
            if(i==delete_index)
            {
                pre->next=cur->next;
                delete cur;
                return head;
            }
            pre=pre->next;
            cur=cur->next;
        }

        return head;
    }
};
