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
    vector<vector<string>> printTree(TreeNode* root) {
        if(not root)
            return {};
        
        int rows=getHeight(root);
        int col=pow(2, rows)-1;
              
        vector<vector<string>>res(rows,vector<string>(col,""));
        preorder(root, res, 0, col-1, 0);
                
        return res;    
    }
    
    int getHeight(TreeNode* root){
        if (not root)
            return 0;
        
        int lh=getHeight(root->left);
        int rh=getHeight(root->right);
        
        return 1 + max(lh, rh);        
    }
    
    void preorder(TreeNode* root, vector<vector<string>>&res, int st, int en, int i){
        if(root){
            int mid=st+(en-st)/2;
            res[i][mid]=to_string(root->val);
            preorder(root->left, res, st, mid, i+1);
            preorder(root->right, res, mid+1, en, i+1);
        }
    }
};











