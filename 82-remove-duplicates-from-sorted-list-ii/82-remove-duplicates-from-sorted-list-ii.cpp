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
    ListNode* deleteDuplicates(ListNode* head) {
        if(not head)
            return nullptr;
        
        ListNode* thead=new ListNode(-101, head);
    
        ListNode* pred=thead;
        
        while(head){
            
            if(head->next and head->val==head->next->val){
                while(head->next and head->val==head->next->val)
                    head=head->next;
                
                pred->next=head->next;
            }        
            
            else
                pred=pred->next;
            
            head=head->next;
        }
        
        return thead->next;
    }
    

};