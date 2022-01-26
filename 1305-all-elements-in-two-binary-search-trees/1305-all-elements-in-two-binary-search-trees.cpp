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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        vector<int> res2;
        
        if(not root1 and not root2)
            return res;
        
        inT(root1, res);
        inT(root2, res2);
        
//         cout << "from root 1: ";
//         for(auto i: res)
//             cout << i << " ";
//         cout << endl;
        
//         cout << "from root 2: ";
//         for(auto i: res2)
//             cout << i << " ";
//         cout << endl;
        
        res.insert(res.end(), res2.begin(), res2.end());
        sort(res.begin(), res.end());
        
        return res;
        
    }
    
    void inT(TreeNode* root, vector<int>& res){
        if(not root)
            return;
        
        inT(root->left, res);
        res.push_back(root->val);
        inT(root->right, res);
        
        return;
        
    }
};