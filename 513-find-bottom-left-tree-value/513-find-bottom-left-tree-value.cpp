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
    int findBottomLeftValue(TreeNode* root) {
        if(not root)
            return {};
        
        vector< vector<int> > res;
        
        queue<TreeNode*> q;
        int len=0;
        
        q.push(root);
        
        while(!q.empty()){
            len=q.size();
            vector<int> tm;
            
            for(int i=0; i<len; i++){
                TreeNode* node = q.front();
                q.pop();
                tm.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            
            res.push_back(tm);
        }
        
        return res[res.size()-1][0];        
    }
};