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
    int maxLevelSum(TreeNode* root) {
        vector<int> res; 
        
        int mx=INT_MIN;
            if(root==NULL)
               return 0;

            queue<TreeNode*> q;

            q.push(root);
            TreeNode *temp;

            int len;

            while(!q.empty()){
               len=q.size();
               int sm=0;

               for(int i=0;i<len;i++){
                    temp=q.front();
                    q.pop();
                    sm+=temp->val;

                   if(temp->left) q.push(temp->left);
                   if(temp->right) q.push(temp->right);
                }

                mx= max(mx, sm);
                res.push_back(sm);

            }    
        
        for(int i=0; i<res.size();i++)
            if(res[i]==mx)
                return i+1;
        
        return -1;
    }
};