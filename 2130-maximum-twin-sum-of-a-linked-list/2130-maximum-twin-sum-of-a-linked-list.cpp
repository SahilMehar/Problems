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
    int pairSum(ListNode* head) 
    {
        int max = INT_MIN;
        vector<int> v;
        ListNode *curr = head;
        for(curr = head; curr != NULL; curr = curr -> next)
            v.push_back(curr -> val);
        for(int i = 0; i < v. size(); i++)
        {
            if(v[i]+v[v.size()-1-i] > max)
                max = v[i]+v[v.size()-1-i];
        }
        return max;
    }
};