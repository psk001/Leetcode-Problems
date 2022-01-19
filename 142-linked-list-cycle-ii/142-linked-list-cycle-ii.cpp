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
    ListNode *detectCycle(ListNode *head) {
        if(not head)
            return head;
        
        set<ListNode* > col;

        ListNode* temp=head;
        
        while(temp){
            int cs=col.size();
            col.insert(temp);
            int ns=col.size();
            
            if(ns==cs)
                return temp;
            
            temp=temp->next;
        }
        
        
        return NULL;
    }
};