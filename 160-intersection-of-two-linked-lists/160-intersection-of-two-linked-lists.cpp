/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(not headA || not headB)
            return NULL;
            
        set<ListNode* > col;
        ListNode* temp=headA;
        while(temp){
            col.insert(temp);
            temp=temp->next;
        }
        
        temp=headB;
        
        while(temp){
            int in=col.size();
            col.insert(temp);
            int nn=col.size();
            
            if(in==nn)
                return temp;
            
            temp=temp->next;
        }
        
        return NULL;      
        
    }
};