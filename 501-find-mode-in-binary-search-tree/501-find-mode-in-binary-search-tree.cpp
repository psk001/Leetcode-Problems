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
    map<int, int> val;
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        
        iterate(root);
        
        int mx=INT_MIN;        
        for(auto i: val)
            mx=max(mx, i.second);
        
        for(auto i: val)
            if(i.second>=mx)
                res.push_back(i.first);
        
        return res;
    }
    
    void iterate(TreeNode* root){
        if(not root)
            return;
        
        val[root->val]++;
        
        iterate(root->left);
        iterate(root->right);
        
    }
};