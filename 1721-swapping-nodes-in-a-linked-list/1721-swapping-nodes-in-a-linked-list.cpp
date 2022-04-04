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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head, *first;
        while(temp){
            n++;
            if(n==k){
                first=temp;
                // cout << "first->val: " << first->val << endl;
            }
                    
            temp=temp->next;
        }
        
        // if(n==k)
        //     return head;
        
        temp=head;
        int tp=0;
        while(tp!=n-k){
            temp=temp->next;
            tp++;
        }
        // cout << "temp->val: " << temp->val << endl;
        int s=first->val;
        first->val=temp->val;
        temp->val=s;
        
        return head;
    }
};