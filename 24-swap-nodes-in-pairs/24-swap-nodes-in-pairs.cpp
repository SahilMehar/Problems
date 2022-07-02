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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head == NULL)
            return NULL;
        ListNode *curr = head;
        vector<int> v;
        for(curr = head; curr != NULL; curr = curr -> next)
        {
            v.push_back(curr -> val);
        }
        for(int i = 0; i < v.size()-1; i+=2)
        {
            swap(v[i], v[i+1]);
        }
        curr = head;
        for(int i = 0; i < v.size(); i++)
        {
            curr -> val = v[i];
            curr = curr -> next;
        }
        return head;
    }
};