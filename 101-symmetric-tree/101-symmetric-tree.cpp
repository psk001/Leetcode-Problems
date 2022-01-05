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
    bool isSymmetric(TreeNode* root) {
        if(not root)
            return false;
        
        return check(root, root);
    }
    
    static bool check(TreeNode* root1, TreeNode* root2){
        if((not root1) and (not root2))
            return true;
        
        if(root1 and root2){
           // cout << "left and right trees exist\nnode value: " << root->left->val << endl;
            
            if(root1->val==root2->val){
              //   cout << "left and right values are equal\n";
                return (check(root1->left, root2->right) and (check(root1->right, root2->left)));
            }
        }
        return false;
    }
};