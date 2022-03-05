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
    vector<double> averageOfLevels(TreeNode* root) {
        if(not root)
            return {};
        
        vector<double> res;
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){
            int len=q.size();
            
            double t=0;
            
            for(int i=0; i<len; i++){
                TreeNode* tm=q.front();
                t+=tm->val;
                q.pop();
                
                if(tm->left)
                    q.push(tm->left);
                
                if(tm->right)
                    q.push(tm->right);                
            }  
            
            res.push_back(t/len);
            
        }
        return res;
    }
};