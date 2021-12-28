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
        ListNode* temp=head;
        int k=0;
        
        while(temp){
            k++;
            temp=temp->next;
        }
        
        k = ceil(k/2);
        
        temp=head;
        while(k--)
            temp=temp->next;
        
        return temp;
            
    }
};