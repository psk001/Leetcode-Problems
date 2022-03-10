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
    int sumNumbers(TreeNode* root) {
        
//         if(not root->right and root->left)
//             return (root->val*10 + root->left->val);
        
//         else if(not root->left)
//             return (root->val*10 + root->right->val);
        
//         else if(not(root->right and root->left))
//             return root->val;
        
        vector<int> store;
        get(root, store, 0);
        
        int res=0;
        
        for(auto i: store){
            cout << i << " ";
            res+=i;
        }
        cout << endl;
        return res;        
    }
    
    void get(TreeNode* root, vector<int>& st, int curr){
        if(not root)
            return;
        
        if(not root->left and not root->right){
            int cr=curr*10+root->val;
            st.push_back(cr);
            return;
        }
        
        int cr=curr*10+root->val;
        get(root->left, st, cr);
        get(root->right, st, cr);
    }
    
};