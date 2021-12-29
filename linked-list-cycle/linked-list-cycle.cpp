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
    bool hasCycle(ListNode *head) {
        if( (not head) || (not head->next) )
            return false;
        
        ListNode* temp=head;
        map<ListNode*, int> col;
        
        while(temp){
            if(col[temp]==0){
                col[temp]++;
                temp=temp->next;
            }
            else
                return true;
        }
        
        return false;
    }
};