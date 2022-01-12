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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = new TreeNode(val);
        TreeNode* temp2=root, *parent;
        
        if(not root)
            return temp;

        while(temp2){
            parent=temp2;
            if(temp2->val==val)
                break;
            if(temp2->val<val)
                temp2 = temp2->right;
            else if(temp2->val>val)
                temp2 = temp2->left;
        }
        
        if(parent->val<val)
            parent->right=temp;
        else
            parent->left=temp;
        
        return root;
    }
};