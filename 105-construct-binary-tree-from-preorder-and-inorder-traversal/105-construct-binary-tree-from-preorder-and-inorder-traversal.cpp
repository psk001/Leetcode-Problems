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
    TreeNode* buildTree(vector<int>& pr, vector<int>& ir) {
        map<int, int> imap;
        
        for(int i=0; i<ir.size(); i++)
            imap[ir[i]]=i;
        
        TreeNode* root = buildTree(pr, 0, pr.size()-1, ir, 0, ir.size()-1, imap);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& pr, int pStart, int pEnd, vector<int>& ir, int iStart, int iEnd, map<int, int>& imap){
        if(pStart>pEnd || iStart>iEnd)
            return nullptr;
        
        TreeNode* root = new TreeNode(pr[pStart]);
        
        int inRoot=imap[root->val];
        int nLeft=inRoot-iStart;
        
        root->left=buildTree(pr, pStart+1, pStart+nLeft, ir, iStart, inRoot-1, imap);
        root->right=buildTree(pr, pStart+nLeft+1, pEnd, ir, inRoot+1, iEnd, imap);
        
        return root;        
    }
    
};