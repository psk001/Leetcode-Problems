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
        if(not head)
            return head;
        
        int size=0;
        ListNode* temp= head;
        while(temp){
            size++;
            temp=temp->next;
        }
        cout << size << endl;
        
        ListNode* temp2=head;
        for(int i=0; i<k-1; i++)
            temp2= temp2->next;
        
        int h=size-k;
        cout << h << endl;
        
        temp=head;
        for (int i=0;i<h;i++)
            temp=temp->next;
        
        swap(temp->val ,temp2->val);
        
        return head;
    }
};