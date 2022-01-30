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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        inT(root, res, k);
        return(res[k-1]);
    }
    
    void inT(TreeNode* root, vector<int>& res, int k){
        if(not root)
            return;
        
        inT(root->left, res, k);
        res.push_back(root->val);
        if(res.size()==k)
            return;
        inT(root->right, res, k);
        
        return;
    }
};