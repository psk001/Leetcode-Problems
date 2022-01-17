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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(not root)
            return false;
                
        int currSum = targetSum-root->val; 
        if(currSum==0 && not root->left && not root->right)
            return true;
        
        return (hasPathSum(root->left, currSum) || hasPathSum(root->right, currSum));
        
    }
};