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
    ListNode* deleteMiddle(ListNode* head) {
        vector<ListNode*> col{head};
        
        while(col.back()->next)
            col.push_back(col.back()->next);
        
        if(col.size()==1)
            return NULL;
        
        if(col.size()==2){
            col[0]->next=NULL;
            return head;
        }
        
        col[col.size()/2 - 1]->next = col[col.size()/2+1];
        
        return head;
    }
};