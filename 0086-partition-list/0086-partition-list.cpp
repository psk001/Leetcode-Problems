/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        if(not head)
            return nullptr;
        
        ListNode* temp;
        temp=head;
        
        ListNode* l= nullptr;
        ListNode* r= nullptr;
        
        ListNode* h= nullptr;
        ListNode* m= nullptr;
        
        while(temp){
            int v= temp->val;
            
            ListNode* cn= new ListNode(v);
            
            if(v<x){
                if(!l)
                    l=cn;
                else{
                    l->next=cn;
                    l=cn;
                }
                
                if(!h)
                    h=l;
            }else {
                if(!r)
                    r=cn;
                else{
                    r->next=cn;
                    r=cn;    
                }
                
                if(!m)
                    m=r;
                
                // cout << "m val: " << r->val << endl;
            }
                
            
            temp=temp->next;
        }
        
       if(!l and r){
           r->next=nullptr;
           return m;
       }else if(l and !r){
           // l->next=m;
           l->next=nullptr;
           return h;
       }
        
        l->next=m;
        r->next=nullptr;
        
        return h;
    }
};