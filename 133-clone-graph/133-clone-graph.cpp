/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(not node)
            return nullptr;
        
        unordered_map<int, Node*> visited;
        return clone(node, visited);
    }
    
    Node* clone(Node* node, unordered_map<int, Node*>& visited){
        Node* temp=new Node(node->val);
        
        visited.insert({node->val, temp});
        
        for(Node* p: node->neighbors){
            auto it = visited.find(p->val);
            if(it==visited.end()){
                Node* cn=clone(p, visited);
                temp->neighbors.push_back(cn);
            }
            else
                temp->neighbors.push_back(it->second);
        }
        
        return temp;
    }
    
};