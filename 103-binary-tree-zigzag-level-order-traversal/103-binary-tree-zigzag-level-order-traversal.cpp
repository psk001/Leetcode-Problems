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
        
        while(!q.empty()){
            vector<int> tv;
            vector<TreeNode*> tn;
            
            while(!q.empty()){
                TreeNode* node=q.front();
                q.pop();
                
                tv.push_back(node->val);
                if(node->left)
                    tn.push_back(node->left);
                if(node->right)
                    tn.push_back(node->right);
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
            
            for(auto i: tn)
                q.push(i);
            
        }
        
        // for(auto i: res){
        //     for(auto p: i)
        //         cout << p << " " ;
        // cout << endl;
        // }
        
        return res;
        
    }
};