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
    int res=0;
    int goodNodes(TreeNode* root) {
        getMax(root, root->val);
        return res;
    }
    
    void getMax(TreeNode* root, int cmax){
        if(!root)
            return;
        
        if(root->val>=cmax){
            res++;
            cmax= root->val;
        }
        
        getMax(root->left, cmax);
        getMax(root->right, cmax);
    }
    
};