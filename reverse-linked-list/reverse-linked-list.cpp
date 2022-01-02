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
    ListNode* reverseList(ListNode* head) {
        if(not head)
            return NULL;
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forw=head;
        
        while(curr){
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr=forw;
        }
        
        return prev;
    }
};