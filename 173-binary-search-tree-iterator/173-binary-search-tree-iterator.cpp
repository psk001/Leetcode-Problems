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
class BSTIterator {
    
    void ino(TreeNode* root, vector<int>& t){
        if(not root)
            return;
        
        ino(root->left, t);
        t.push_back(root->val);
        ino(root->right, t);
    }
    vector<int> t;
    int temp;
    int size;
    
public:
    BSTIterator(TreeNode* root) {
        ino(root, t);
        temp=-1;
        size=t.size();
    }
    
    int next() {
        temp++;
        return t[temp];
    }
    
    bool hasNext() {
       return (temp+1<size);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */