class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};


class MyLinkedList {
    int size=0;
    Node* head=new Node(0);
    
public:
    MyLinkedList() {}
    
    int get(int index) {
        if(index>=size)
            return -1;
        
        Node* temp=head->next;
        for(int i=0; i<index; i++)
            temp=temp->next;
        
        return temp->val;
        
    }
    
    void addAtHead(int val) {
        size++;
        Node* temp = head->next;
        head->next = new Node(val);
        head->next->next=temp;      
    }
    
    void addAtTail(int val) {
        size++;
        Node* temp=head;
        while(temp->next != nullptr)
            temp=temp->next;
        
        temp->next=new Node(val);
        
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)
            return;
        
        size++;
        
        Node* temp=head;
        for(int i=0; i<index; i++)
            temp=temp->next;
            
        Node* t=temp->next;
        temp->next=new Node(val);
        temp->next->next=t;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size)
            return;
        size--;
        Node* temp=head;
        for(int i=0; i<index; i++)
            temp=temp->next;
        
        temp->next=temp->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */