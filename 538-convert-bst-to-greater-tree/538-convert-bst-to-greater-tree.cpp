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
    TreeNode* convertBST(TreeNode* root) {
        if(not root)
            return nullptr;
        
        vector<int> in;
        ino(in, root);
        
        map<int, int> col;
        
        col[in[in.size()-1]]=in[in.size()-1];
        
        for(int i=in.size()-2; i>=0; i--){
            col[in[i]]=in[i]+in[i+1];
            in[i]=in[i]+in[i+1];
        }
        
        // for(auto i: in)
        //     cout << i << " " ;
        // cout << endl;
        
        convert(root, col);
        
        return root;
        
    }
    
    void convert(TreeNode* root, map<int, int>& col){
        if(not root)
            return;
        
        root->val=col[root->val];
        convert(root->left, col);
        convert(root->right, col);
    }
    
    void ino(vector<int>& in, TreeNode* root){
        if(not root)
            return;
        
        ino(in, root->left);
        in.push_back(root->val);
        ino(in, root->right);
    }
};