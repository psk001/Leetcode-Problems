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
    ListNode* middleNode(ListNode* head) {
        if(not head->next)
            return head;
        ListNode* prev=nullptr;
        while(head and head->next){
            prev = (prev==nullptr) ? head : prev->next;
            head=head->next->next;
        }
        ListNode* mid=prev->next;
        return mid;
    }
};