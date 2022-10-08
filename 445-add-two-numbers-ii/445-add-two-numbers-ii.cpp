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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;
        
        for(auto t= l1; t!=nullptr; t=t->next)
            s1.push(t->val);
        
        for(auto t= l2; t!=nullptr; t=t->next)
            s2.push(t->val);
        
        int sm= s1.top()+s2.top();
        int rem= sm/10;
        
        auto last= new ListNode(sm%10);
        
        s1.pop();
        s2.pop();
        
        while(s1.size() and s2.size()){
            sm= s1.top()+s2.top()+rem;
            auto temp= new ListNode(sm%10, last);
            last= temp;
            
            s1.pop();
            s2.pop();
            
            rem= sm/10;
        }
        
        while(s1.size()){
            sm= s1.top()+rem;
            auto temp= new ListNode(sm%10, last);
            last= temp;
            
            s1.pop();
            
            rem= sm/10;
        }
        
        while(s2.size()){
            sm= s2.top()+rem;
            auto temp= new ListNode(sm%10, last);
            last= temp;
            
            s2.pop();
            
            rem= sm/10;
        }
        
        if(rem){
            auto temp= new ListNode(rem, last);
            last= temp;
        }
        
        return last;
        
    }
};