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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        
        ListNode* temp=head;
        while(temp){
            k++;
            temp=temp->next;
        }
        if(k==n){
            if(head->next)
                return head->next;
            return NULL;
        }
        
        k -= n+1;
        temp=head;
     
        while(k--)
            temp=temp->next;
  
        if(temp->next->next)
            temp->next = temp->next->next;
        
        else
            temp->next=NULL;
            
        
        return head;
    }
};