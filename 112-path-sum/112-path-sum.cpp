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
        
        return hasPathSum1(root, targetSum);
    }
    
    bool hasPathSum1(TreeNode* root, int targetSum){
        // cout << "root val: " << root->val << " targetSum: " << targetSum << endl;
        if(root->left==NULL and root->right==NULL and targetSum==root->val)
            return true;
        
        if(root->left==NULL and root->right==NULL and targetSum!=root->val)
            return false;        
        
        bool lt, rt;
        if(root->left)
            lt= hasPathSum(root->left, targetSum-root->val);
        
        if (root->right)
            rt= hasPathSum(root->right, targetSum-root->val);
        
        return (lt or rt);
    }
};