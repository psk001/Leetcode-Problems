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
        
        vector<int> res;
        
        queue<TreeNode*> q;
        int len;
        
        q.push(root);
        
        while(!q.empty()){
            vector<int> tm;
            len=q.size();
            int k;
            for(int i=0; i<len; i++){
                TreeNode* temp=q.front();
                q.pop();
                tm.push_back(temp->val);
                k=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);    
            }           
            
            res.push_back(k);
        }
        
        return res;
        
    }
};