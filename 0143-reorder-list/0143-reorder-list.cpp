class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL) return;
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast->next) slow=slow->next;
        ListNode *half=slow;
        ListNode *next=NULL,*prev=NULL;
        while(half)
        {
            next=half->next;
            half->next=prev;
            prev=half;
            half=next;
        }
        half=prev;
        ListNode *headnext,*halfnext;
        while(head && half)
        {
            headnext=head->next;
            halfnext=half->next;
            head->next=half;
            half->next=headnext;
            head=headnext;
            half=halfnext;
        }
        if(head && head->next) head->next->next=NULL;
    }
};