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
    bool findTarget(TreeNode* root, int k) {
        ino(root);

        int l=0, r=in.size()-1;
        while(l<r){
            int sm= in[l]+in[r];
            // cout << "l: " << l << " r: " << r << " sm: " << sm << endl;
            if(sm<k)
                l++;
            else if(sm>k)
                r--;
            else
                return true;
        }
        
        return false;
    }
    
    void ino(TreeNode* root){
        if(not root)
            return;
        
        ino(root->left);
        in.push_back(root->val);
        ino(root->right);
    }
};