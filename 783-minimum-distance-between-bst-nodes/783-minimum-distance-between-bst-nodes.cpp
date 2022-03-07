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
    int minDiffInBST(TreeNode* root) {

        vector<int> in;
        inr(root, in);
        int res=INT_MAX;
        
        for(int i=0; i<in.size()-1; i++)
            res=min(res, abs(in[i]-in[i+1]));
        
        return res;
        
    }
    
    void inr(TreeNode* root, vector<int>& in){
        if(not root)
            return;
        
        inr(root->left, in);
        in.push_back(root->val);
        inr(root->right, in);
    }
};