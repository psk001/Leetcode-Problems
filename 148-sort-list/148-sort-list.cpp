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
    ListNode* sortList(ListNode* head) {
        if (not head)
            return head;
        vector<int> col;
        
        ListNode* temp=head;
        while(temp){
            col.push_back(temp->val);
            temp = temp->next;
        }
        
        sort(col.begin(), col.end());
        temp=head;
        int i=0;
        
        while(temp){
            temp->val = col[i];
            i++;
            temp=temp->next;
        }
        
        return head;
    }
};