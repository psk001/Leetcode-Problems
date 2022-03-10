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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(not root)
            return {};
        
        vector<vector<int>> res;
        vector<int> temp;
        
        get(root, targetSum, res, temp);
        
        return res;
    }
    
    void get(TreeNode* root, int targetSum, vector<vector<int>>& res, vector<int> temp){
        
        if(not root)
            return;       
    
        if(not root->left and not root->right and targetSum==root->val ){
            temp.push_back(root->val);
            res.push_back(temp);
            return;
        }
        
        temp.push_back(root->val);
        get(root->left, targetSum-root->val, res, temp);
        get(root->right, targetSum-root->val, res, temp);
        
    }

    
};