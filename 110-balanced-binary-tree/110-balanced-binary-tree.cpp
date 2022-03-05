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
    bool isBalanced(TreeNode* root) {
        if(not root)
            return 1;
        vector<int> l;
        vector<int> r;
        getHeight(root, l, r);
        
        for(int i=0; i<l.size(); i++)
            if(abs(l[i]-r[i])>1)
                return 0;
        
        return 1;
        
    }
    
    int getHeight(TreeNode* root, vector<int>&l, vector<int>&r){
        if(not root)
            return 0;
        
        int lh=getHeight(root->left, l, r);
        int rh=getHeight(root->right, l, r);
        l.push_back(lh);
        r.push_back(rh);
    
        
        return 1+max(lh, rh);
    }
};