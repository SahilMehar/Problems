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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(head == NULL)
            return NULL;
        vector<int> v;
        ListNode *curr = head;
        for(curr = head; curr != NULL; curr = curr -> next)
            v.push_back(curr -> val);
        curr = head;
        reverse(v.begin()+left-1, v.begin()+(right));
        reverse(v.begin(), v.end());
        for(curr = head; curr != NULL; curr = curr -> next)
        {
            curr -> val = v.back();
            v.pop_back();
        }
        return head;
    }
};