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
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inr;
        ino(root, inr);
        TreeNode* temp = build(0, inr.size()-1, inr);
        
        return temp;
    }
    
    void ino(TreeNode* root, vector<int>& inr){
        if(not root)
            return;
        
        ino(root->left, inr);
        inr.push_back(root->val);
        ino(root->right, inr);
    }
    
    TreeNode* build(int l, int r, vector<int>& inr){
        if(l>r)
            return nullptr;
        
        int mid=(l+r)/2;
        TreeNode* root = new TreeNode(inr[mid]);
        root->left = build(l, mid-1, inr);
        root->right = build(mid+1, r, inr);
        
        return root;
    }
    
};