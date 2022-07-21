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
class Solution {
public:
    ListNode *rev(ListNode *head)
    {
        ListNode *curr = head, *prev = NULL, *temp;
        while(curr != NULL)
        {
            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    int pairSum(ListNode* head) 
    {
        int n = 0, mx = INT_MIN;
        ListNode *curr = head, *temp;
        while(curr != NULL)
        {
            n++;
            curr = curr -> next;
        }
        curr = head;
        for(int i = 0; i < (n/2)-1; i++)
            curr = curr -> next;
        
        temp = curr -> next;
        curr -> next = NULL;
        temp = rev(temp);
        curr = head;
        while(curr != NULL)
        {
            mx = max(mx,(curr->val + temp->val));
            curr = curr -> next;
            temp = temp -> next;
        }
        return mx;
    }
};
