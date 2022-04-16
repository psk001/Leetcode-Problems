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
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(not root)
            return {};
        
        vector<vector<int>> res;
        
        queue<Node*> q;
        q.push(root);
        
        while(not q.empty()){
            vector<int> t;
            int p=q.size();
                      
            for(int i=0; i<p; i++){
                Node* temp=q.front();
                q.pop();
                t.push_back(temp->val);
                
                for(auto i: temp->children)
                    q.push(i);                
            }
            res.push_back(t);            
        }
        
        return res;
        
    }
};