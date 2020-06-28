#include <bits/stdc++.h>

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
        ListNode *temp = *head;
        *head = temp->next;
        delete temp;
    }

public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        int i, j;
        bool duplicate;
        ListNode *demo, *;

        for (i = 0; i < Length(head); i++)
        {
            duplicate = false;
            for (j = i + 1; j < Length(head); j++)
            {
                if (I->val == demo->next->val)
                {
                    duplicate = true;
                    {
                    }
                }
                demo = demo->next;
            }
            if (duplicate == true)
            {
            }
            I = I->next;
        }
        return head;
    }
};

int main()
{
}
