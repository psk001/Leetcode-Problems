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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(not root)
            return nullptr;
        if(root->val > high)
            return trimBST(root->left, low, high);
        if(root->val < low)
            return trimBST(root->right, low, high);
        
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        
        return root;
    }
        
    void trim(TreeNode* root, int low, int high){
        if(not root)
            return ;
        
        if(root->val > high or root->val < low)
            root= deleteNode(root, root->val);
        
        if(root->left != nullptr)
            trimBST(root->left, low, high);
        
        if(root->right != nullptr) 
            trimBST(root->right, low, high);
    }
    
    
    int findMin(TreeNode* root){
        while(root->left!=nullptr)
            root=root->left;
        return root->val;
    }  
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(not root)
            return root;

        else if(root->val>key)
            root->left= deleteNode(root->left, key);

        else if(root->val<key)
            root->right= deleteNode(root->right, key);

        else{
            if (root->right==nullptr)
                return root->left;

            else if(root->left==nullptr)
                return root->right;

            else{
                root->val=findMin(root->right);
                root->right=deleteNode(root->right, root->val);
            }

        }
        return root;

    }    
    
};