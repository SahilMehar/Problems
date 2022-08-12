/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool LCA(TreeNode* root, vector<TreeNode*> &v, TreeNode* p)
    {
        if(root == NULL)
            return false;
        v.push_back(root);
        if(root -> val == p -> val)
            return true;
        if(LCA(root->left,v,p) || LCA(root -> right,v,p))
            return true;
        v.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        vector<TreeNode*> v,a;
        if(LCA(root,v,p) == false || LCA(root,a,q) == false)
            return NULL;
        int n = min(v.size(),a.size());
        if(n == 1 && v[0] == a[0])
            return v[0];
            
        for(int i = 0; (i < v.size()-1 && i < a.size()-1); i++)
        {
             if(v[i+1] == a[i+1] && i+1 == n-1)
                return v[i+1];
            else if(v[i+1] != a[i+1])
                return v[i];
        }
        return NULL;       
        
    }
};