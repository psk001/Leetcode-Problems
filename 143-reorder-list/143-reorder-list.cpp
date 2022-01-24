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
    void reorderList(ListNode* head) {
        if(not head or not head->next)
            return;
        
        ListNode* first=head, *second, *slast, *last;
        
     
        while(first){
            second=first->next;
            
            slast=getSecondLast(first);
            
            if(not slast)
                return;
            
            last=slast->next;
            if(last==nullptr){
                cout << "last pointer is null\n";
                break;
            }
                
            slast->next=nullptr;
            first->next=last;
            last->next=second;
            
            first=second;
        }
        
        return;
        
    }
    
    ListNode* getSecondLast(ListNode* head){
        if(not head or not head->next or not head->next->next)
            return nullptr;
        
        while(head->next->next)
            head=head->next;
        
        return head;            
    }
};