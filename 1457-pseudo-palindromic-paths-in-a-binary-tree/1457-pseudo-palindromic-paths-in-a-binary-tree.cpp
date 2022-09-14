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
    vector<vector<int>> st;
    int res=0;
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> col(10, 0);
        path(root, col);      
        
        return res;
    }
    
    void path(TreeNode* root, vector<int> col){
        if(!root->left and !root->right){
            col[root->val]++;
            // st.push_back(col);
            int ev=0, od=0;
            for(auto j: col){
                if(j==0)
                    continue;
                // cout << j << " ";
                if(j%2)
                    od++;
                else
                    ev++;
            }
            // cout << endl << "even: " << ev << " od: " << od << endl;
            if(od==0 || od==1)
                res++;
  
            return;
        }
        
        col[root->val]++;
        if(root->left)
            path(root->left, col);
        
        if(root->right)
            path(root->right, col);
    }
};
