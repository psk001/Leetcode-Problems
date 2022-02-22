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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(not l1 and not l2)
            return nullptr;
        
        if(not l2)
            return l1;
        if(not l1)
            return l2;
        
        ListNode* temp=new ListNode();
        ListNode* temp1=l1, *temp2=l2;
        
        ListNode* head=temp;
        
        int sm=temp1->val+temp2->val;
        temp->val=sm%10;
        int cr=sm/10;
        
        temp1=temp1->next;
        temp2=temp2->next;
        ListNode* t3;
        while(temp1 and temp2){
            t3 = new ListNode();
            sm = temp1->val+temp2->val+cr;
            t3->val=sm%10;
            
            cr=sm/10;
            
            temp->next=t3;
            temp=t3;
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        while(temp1){
            t3=new ListNode();
            sm=temp1->val+cr;
            t3->val=sm%10;
            cr=sm/10;
            
            temp->next=t3;
            temp=t3;
            
            temp1=temp1->next;
        }
        
        while(temp2){
            t3=new ListNode();
            sm=temp2->val+cr;
            t3->val=sm%10;
            cr=sm/10;
            
            temp->next=t3;
            temp=t3;
            
            temp2=temp2->next;
        }        
        
        if(cr>0){
            t3= new ListNode(cr);
            temp->next=t3;
            temp=t3;
        }
            
        
        temp->next=nullptr;
        
        return head;
        
    }
};