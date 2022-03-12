/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(not head)
            return head;
        
        Node* head2= new Node(-1);
        Node* start=head2;
        
        map<Node*, Node*> col;
        
        Node* temp=head;
        
        while(temp){
            Node* temp2=new Node(temp->val);
            head2->next=temp2;
            col[temp]=temp2;
            
            head2=temp2;
            temp=temp->next;
        }
        
        temp=head, head2=start->next;
        
        while(temp){
            head2->random=col[temp->random];
            temp=temp->next;
            head2=head2->next;
        }
        
        return start->next;
        
    }
};