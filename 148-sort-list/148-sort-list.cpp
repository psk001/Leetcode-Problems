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
    ListNode* sortList(ListNode* head) {
        if(not head or not head->next)
            return head;
        
        ListNode* mid=getMid(head);
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);
        
        return merge(left, right);
    }
    
    ListNode* merge(ListNode* head1, ListNode* head2){
        ListNode temp(0);
        ListNode* ptr=&temp;
        
        while(head1 and head2){
            if(head1->val < head2->val){
                ptr->next=head1;
                head1=head1->next;
            }
            else{
                ptr->next=head2;
                head2=head2->next;
            }
            ptr=ptr->next;                
        }
        
        if(head1)
            ptr->next=head1;
        else
            ptr->next=head2;
        
        return temp.next;
        
    }
    
    ListNode* getMid(ListNode* head){
        ListNode* prev=NULL;
        
        while(head and head->next){
            prev=(prev==NULL) ? head : prev->next;
            head=head->next->next;
        }
        
        ListNode* mid=prev->next;
        prev->next=NULL;
        
        return mid;
    }
};