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
    ListNode *rec(ListNode* head)
    {
        if(head == NULL || head ->next == NULL)
            return head;
        ListNode *new_head = rec(head -> next);
        ListNode *new_tail = head -> next;
        new_tail -> next = head;
        head -> next = NULL;
        return new_head;
    }
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL)
            return NULL;
        return rec(head);
    }
};
