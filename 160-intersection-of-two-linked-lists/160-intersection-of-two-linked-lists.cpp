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
        map<ListNode*, int> col;
        
        ListNode* tmp=headA;
        
        while(tmp){
            col[tmp]++;
            tmp=tmp->next;
        }
        
        tmp=headB;
        
        while(tmp){
            if(col[tmp])
                return tmp;
            
            tmp=tmp->next;
        }
            
        return nullptr;
    }
};