/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans;
    int sum(TreeNode *root, int h)
    {
        if(root == NULL)
            return ans;
        if(h == 0)
            ans += root -> val;
        sum(root -> left, h-1);
        sum(root -> right, h-1);
        return ans;
    }
    int height(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        return 1 + max(height(root -> left), height(root -> right));
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        if(root == NULL)
            return NULL;
        int h = height(root);
        return sum(root, h-1);        
        
    }
};