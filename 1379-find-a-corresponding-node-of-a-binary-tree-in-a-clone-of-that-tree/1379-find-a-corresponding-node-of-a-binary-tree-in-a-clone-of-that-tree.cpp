/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* res;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val = target->val;
        TreeNode* temp=cloned;
        
        getNode(temp, val);
        return res;
        
    }
    
    void getNode(TreeNode* temp, int val){
        if(not temp)
            return;
        
        if(temp->val==val){
            res=temp;
            return;
        }
        
        getNode(temp->left, val);
        getNode(temp->right, val);
    }
    
};