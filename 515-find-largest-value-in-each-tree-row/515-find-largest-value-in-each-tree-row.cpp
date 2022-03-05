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
    vector<int> largestValues(TreeNode* root) {
        if(not root)
            return {};
        
        vector<int> res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int len=q.size();
            int cmax=INT_MIN;
            
            for(int i=0; i<len; i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);  
                
                cmax=max(cmax, temp->val);
            }
            res.push_back(cmax);
            
        }
        return res;
    }
};