/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> po;
public:
    vector<int> preorder(Node* root) {
        pre(root);
        
        return po;
    }
    
    void pre(Node* root){
        if(not root)
            return;
        
        po.push_back(root->val);
        for(auto i: root->children)
            preorder(i);
        
    }
};