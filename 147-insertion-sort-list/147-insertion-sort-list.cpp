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
    ListNode* insertionSortList(ListNode* head) {
        if(not head)
            return head;
        
        ListNode* temp=head;
        vector<int> col;
        
        while(temp){
            col.push_back(temp->val);
            temp=temp->next;
        }
        
        sort(col.begin(), col.end());
        temp=head;
        int i=0;
        while(temp){
            temp->val=col[i];
            i++;
            temp=temp->next;
        }
        
//         while(temp){
//             p=temp->val;
            
//             ListNode* temp2=head;
            
//             while(temp2 != temp){
//                 if(temp2->val > p){
//                     int k=temp2->val;
//                     temp2->val=p;
//                     temp->val=k;
//                     break;                    
//                 }
//                 temp2=temp2->next;
//             }
//             temp=temp->next;
//         }
        
        return head;
        
    }
};