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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(not root)
            return{};
        
        vector<vector<int>> res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int flag=0;
        int len;
        
        while(!q.empty()){
            vector<int> tv;
            // vector<TreeNode*> tn;
            len = q.size();
            
            for(int i=0; i<len; i++){
                TreeNode* node=q.front();
                q.pop();
                
                tv.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            } 
            
            // pushes current level vector into result vector;
            if(flag==1){
                reverse(tv.begin(), tv.end());
                res.push_back(tv);
                flag=0;
            }
            else{
                res.push_back(tv);
                flag=1;
            }
            
            // for(auto i: tn)
            //     q.push(i);
            
        }
        
        // for(auto i: res){
        //     for(auto p: i)
        //         cout << p << " " ;
        // cout << endl;
        // }
        
        return res;
        
    }
};