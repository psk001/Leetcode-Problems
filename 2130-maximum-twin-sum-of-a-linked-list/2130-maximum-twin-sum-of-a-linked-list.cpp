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
    int pairSum(ListNode* head) {
        vector<int> st;
        
        ListNode* temp= head;
        
        while(temp){
            st.push_back(temp->val);
            temp= temp->next;
        }
        
        int n= st.size()-1;
        
        int start= 0, end= n-start;
        int res= INT_MIN;
        
        while(start<=end){
            res= max(res, st[start]+ st[end]);
            start++, end--;
        }
        
        return res;
    }
};