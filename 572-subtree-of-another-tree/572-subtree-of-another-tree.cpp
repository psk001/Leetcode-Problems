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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {  
        if(not root)
            return false;
        
        if(root->val==subRoot->val and check(root, subRoot))
            return true;
        
        if(isSubtree(root->left, subRoot))
           return true;
        
        if(isSubtree(root->right, subRoot))
            return true;
        
        return false;
    }
    
    bool check(TreeNode* root, TreeNode* subRoot){
        
        if(root==nullptr and subRoot==nullptr)
            return true;
        
        if(root == nullptr or subRoot==nullptr) 
            return false;
        
        if(root->val != subRoot->val)
            return false;
        
        if (check(root->left, subRoot->left) and (check(root->right, subRoot->right)))
            return true;
        
        return false;
        
    }
    
};