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
            return 0;
        
        vector<int> st;      
        
        int curr=targetSum-root->val;
        
        if(curr==0 && not root->left and not root->right)
            return true;
        
        return (hasPathSum(root->left, curr) or (hasPathSum(root->right, curr)));
        
    }
};