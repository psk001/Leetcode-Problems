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
    bool findTarget(TreeNode* root, int k) {
        if(not root)
            return false;
        
        set<int> col;
        hsh(root, col);
        for(auto i: col)
            cout << i << " ";
        for(auto i: col){
            if(k-i==i)
                continue;
             if(col.find(k-i) != col.end())            
                return true;
        }
        
        return false;
       
    }
    
    void hsh(TreeNode* root, set<int>& col){
        if(not root)
            return;
        
        col.insert(root->val);
        hsh(root->left, col);
        hsh(root->right, col);
    }

};