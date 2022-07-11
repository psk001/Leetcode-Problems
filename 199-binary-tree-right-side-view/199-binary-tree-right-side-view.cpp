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
    vector<int> rightSideView(TreeNode* root) {
        if(not root)
            return {};
        
        queue<TreeNode*> q;
        q.push(root);
        
        vector<int> res;
        
        while(q.size()){
            int p= q.size(), r;
            for(int i=0; i<p; i++){
                TreeNode* temp= q.front();
                q.pop();
                
                r= temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            res.push_back(r);
        }
        
        return res;
    }
};