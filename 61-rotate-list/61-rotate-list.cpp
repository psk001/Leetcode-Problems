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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(not head or k==0 or not head->next)
            return head;
        
        ListNode* temp=head, *temp2=head;
        int len=0;
        
        while(temp->next){
            len++;
            temp=temp->next;
            temp2=temp2->next;
        }
        
        len++;
        k %= len;
        
        if(k==0)
            return head;
        
        temp=head;
        
        for(int i=0; i<len-k-1; i++)
            temp=temp->next;
        
        ListNode* temp3=temp->next;
        temp->next=nullptr;
        temp2->next=head;
        
        head=temp3;
        
        return head;

        
    }
};