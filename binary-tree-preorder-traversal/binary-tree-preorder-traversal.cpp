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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pt;
        
        if(not root)
            return pt;
        
        TreeNode* temp=root;
        stack<TreeNode*> store;
        store.push(temp);
        
        while(not store.empty()){        
            TreeNode* temp2=store.top();
            store.pop();
           
            if(temp2){
                pt.push_back(temp2->val);
                cout << "current temp data: " << temp2->val << endl;
                
                
                if(temp2->right)
                    store.push(temp2->right);

                if(temp2->left)
                    store.push(temp2->left);

            }
            
                    
        }
        
        return pt;
        
    }
};