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
        vector<double> res; 
        if(root==NULL)
           return res;

        queue<TreeNode*> q;
        
        q.push(root);
        TreeNode *temp;
        
        int len;
        
        while(!q.empty()){
           len=q.size();
           vector<int> v;
           double sum=0;
           for(int i=0;i<len;i++){
                temp=q.front();
                q.pop();
                sum+=temp->val;
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
            }
            
            double avg= sum/len;
            res.push_back(avg);
            
        }
        
        return res; 
        
    }
};