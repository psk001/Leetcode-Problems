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
    int widthOfBinaryTree(TreeNode* root) {
        if(not root)
            return 0;
        
        queue< pair<TreeNode*,long int> > q;
        
        q.push({root, 0});
        long int len;
        long int res=0;
        
        while(!q.empty()){
            
            len=q.size();
            long int start, end;
            long int mmin=q.front().second;
            
            for(int i=0; i<len; i++){
                TreeNode* temp=q.front().first;                               
                long int cId=q.front().second-mmin;
                q.pop();
                
                if(i==0)
                    start=cId;
                if(i==len-1)
                    end=cId;
                
                if(temp->left)
                    q.push({temp->left, 2*cId+1});
                
                if(temp->right)
                    q.push({temp->right, 2*cId+2});
                                
            }
           
            res = max(res, end-start+1);
        }
                
        return res;
    }
    
};