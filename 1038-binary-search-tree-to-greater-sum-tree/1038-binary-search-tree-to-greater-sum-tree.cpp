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
    map<int, int> gt;
    
    TreeNode* bstToGst(TreeNode* root) {
        if(not root)
            return root;
        
        iterate(root);
        sort(val.begin(), val.end());
        
        gt[val[val.size()-1]]=val[val.size()-1];
        
        for(int i=val.size()-2; i>=0; i--){
            int k=val[i]+val[i+1];
            gt[val[i]]=k;
            val[i]=k;
        }
        
        grt(root);
        
        return root;
    }
    
    void iterate(TreeNode* root){
        if(not root)
            return;
        
        val.push_back(root->val);
        
        iterate(root->left);
        iterate(root->right);
    }
    
    void grt(TreeNode* root){
        if(not root)
            return;
        
        root->val = gt[root->val];
        
        grt(root->left);
        grt(root->right);        
    }
    
};