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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(not root)
            return NULL;
        
        cout << "current temp val: " << root->val << "  val: " << endl;
        
        if(root->val==val)
            return root;
        
        if(root->val<val)
            return searchBST(root->right, val);
        
        return searchBST(root->left, val);
        
    }
};