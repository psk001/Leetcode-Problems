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
    int minDepth(TreeNode* root) {
        return getDepth(root);
    }
    
    int getDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        if(!root->left and !root->right)
            return 1;
        
        int lm=INT_MAX, rm=INT_MAX;
        
        if(root->left)
            lm= 1+ getDepth(root->left);
        
        if(root->right)
            rm= 1+getDepth(root->right);
        
        return min(lm, rm);
    }
};