class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) 
            return;
        
        ListNode* slast = head;
        while (slast->next->next) 
            slast=slast->next;
        
        slast->next->next = head->next;
        head->next = slast->next;
        
        slast->next = NULL;
        
        reorderList(head->next->next);
    }
};