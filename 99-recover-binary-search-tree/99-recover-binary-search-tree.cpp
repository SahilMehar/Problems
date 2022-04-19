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
    vector<int> v;
    int i = 0;
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return ; 
        
        inorder(root -> left);
        v.push_back(root -> val);
        inorder(root -> right);
    }
   
        
    void swapi(TreeNode* root)
    {
        if(root == NULL)
            return ;
        swapi(root -> left);
        if(v[i] != root -> val)
            swap(v[i], root -> val);
        i++;
        swapi(root -> right);
        
    }
    void recoverTree(TreeNode* root) 
    {
        TreeNode *curr = root;
        if(root == NULL)
            return ;
        inorder(root);
        sort(v.begin(), v.end());
        swapi(root);
        
    }
};