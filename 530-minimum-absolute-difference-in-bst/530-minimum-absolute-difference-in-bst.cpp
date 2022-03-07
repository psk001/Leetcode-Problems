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
    vector<int> val;
    int getMinimumDifference(TreeNode* root) {
        if(not root)
            return 0;
        
        itr(root);
        
        sort(val.begin(), val.end());
        
        int res=INT_MAX;
        for(int i=0; i<val.size()-1; i++)
            res=min(res, abs(val[i]-val[i+1]));
        
        return res;
    }
    
    void itr(TreeNode* root){
        if(not root)
            return;
        
        val.push_back(root->val);
        
        itr(root->left);
        itr(root->right);
    }
    
};