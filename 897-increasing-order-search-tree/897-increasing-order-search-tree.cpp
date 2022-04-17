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
    vector<int> in;
public:
    TreeNode* increasingBST(TreeNode* root) {
        ino(root);
        
        root->val=in[0];
        TreeNode* temp=root;
        for(int i=1; i<in.size(); i++){
            if(temp->left)
                temp->left=nullptr;
            
            if(temp->right)
                temp->right->val = in[i];
            
            else
                temp->right = new TreeNode(in[i]);
            
            temp = temp->right;
        }
        
        return root;
    }
    
    void ino(TreeNode* root){
        if(not root)
            return;
        
        ino(root->left);
        in.push_back(root->val);
        ino(root->right);
    }
};