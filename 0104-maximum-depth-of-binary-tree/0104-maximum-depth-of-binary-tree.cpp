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
    int maxDepth(TreeNode* root) {
         if(!root)
             return 0;
        
        if(root->left and root->right)
            return 1 + max(maxDepth(root->left), maxDepth(root->right));
        
        if(!root->right)
            return 1+maxDepth(root->left);
        
        if(!root->left)
            return 1+maxDepth(root->right);
        
        return 0;
    }
};