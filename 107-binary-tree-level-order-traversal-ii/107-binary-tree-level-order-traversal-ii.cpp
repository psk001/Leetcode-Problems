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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(not root)
            return {};
        
        queue<TreeNode*> q;
        q.push(root);
        
        vector<vector<int> > res;
        
        while(!q.empty()){
            int len=q.size();
            vector<int> t;
            for(int i=0; i<len; i++){
                TreeNode* temp=q.front();
                q.pop();
                t.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            res.push_back(t);
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};