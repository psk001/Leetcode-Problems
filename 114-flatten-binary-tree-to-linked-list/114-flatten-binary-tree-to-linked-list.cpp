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
    vector<int> pre;
public:
    void flatten(TreeNode* root) {
        if(not root)
            return;
        
        preorder(root);
        
        // root->left=nullptr;
        TreeNode* temp=root;
        
        for(int i=1; i<pre.size(); i++){ 
            temp->left=nullptr;
            
            if(temp->right)
                temp->right->val=pre[i];
            
            else
                temp->right = new TreeNode(pre[i]);
            temp=temp->right;
        }
        
        return;        
    }
    
    void preorder(TreeNode* root){
        if(not root)
            return;
        
        pre.push_back(root->val);
        preorder(root->left);
        preorder(root->right);        
    }
};