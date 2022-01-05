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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(not root)
            return root;
        
        if(p==root or q==root)
            return root;
        
     //   if(root->val > p->val and root->val > q->val)
        TreeNode* right= lowestCommonAncestor(root->right, p, q);
        
      //  if(root->val < p->val and root->val < q->val)
        TreeNode* left= lowestCommonAncestor(root->left, p, q);
        
        if((left) and (right) )
            return root;
        
        if(left)
            return left;
        
        return right;        
        
    }
    

};