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
    ListNode* partition(ListNode* head, int x) 
    {
        if(head == NULL)
            return NULL;
        vector<int> v, a;
        ListNode *curr = head;
        while(curr != NULL)
        {
            v.push_back(curr -> val);
            curr = curr -> next;
        }
        curr = head;
        int n = v.size();
        vector<int> temp(n);
        for(int i = 0 ; i < n; i++)
        {
            if(v[i] < x)
                a.push_back(v[i]);
        }
        int m = a.size();
        for(int i = 0 ; i < m; i++)
        {
            temp[i] = a[i];
        }
        int mx = INT_MIN;
        for(int i = 0; i < m; i++)
            mx = max(mx,temp[i]);
        
        int j = m;
        for(int i = 0; i < n; i++)
        {
            if(v[i] > mx)
                temp[j++] = v[i];
        }
        
        reverse(temp.begin(), temp.end());
        while(curr != NULL)
        {
            curr -> val = temp.back();
            temp.pop_back();
            curr = curr -> next;
        }
        return head;
    }
};