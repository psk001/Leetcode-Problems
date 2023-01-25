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
    int rangeSumBST(TreeNode* root, int low, int high) {
        return rsb(root, low, high);
    }
    
    int rsb(TreeNode* root, int l, int h) {
        if(not root)
            return 0;
        
        int lt=rsb(root->left, l, h);
        int rt=rsb(root->right, l, h);
        
        if(root->val >= l and root->val<=h)
            return root->val + lt+rt;
        
        return lt+rt;
        
    }    
};