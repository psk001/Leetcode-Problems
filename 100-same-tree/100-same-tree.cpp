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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((not p and q) or (p and not q))
            return false;
        
        if(not p and not q)
            return true;
        
        bool k;
        if(p->val==q->val){
          //  cout << "comparing: " << p->val << " and " << q->val << endl;
            bool l=isSameTree(p->left, q->left);
            bool r=isSameTree(p->right, q->right);
            
            k= (r&l);
            if(not k)
                return k;
        }
        else
            k= false;
        
        // cout << "in the end \n";
        return k; // of no use
    }
};