class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int s = 0;
        int carry = 0;
        ListNode *dummy = new ListNode(0);
        ListNode *res = dummy;
        while (l1 != NULL || l2 != NULL)
        {
            int l1_val = (l1 != NULL) ? l1->val : 0;
            int l2_val = (l2 != NULL) ? l2->val : 0;

            s = l1_val + l2_val + carry;
            carry = s / 10;
            int last_digit = s % 10;
            ListNode *new_node = new ListNode(last_digit);
            res->next = new_node;
            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
            res = res->next;
        }
        if (carry > 0)
        {
            ListNode *new_node = new ListNode(carry);
            res->next = new_node;
            res = res->next;
        }

        return dummy->next;
    }
};

int main()
{
}