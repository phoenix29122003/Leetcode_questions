class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dum1=head,*dum2=head;
        int val=0;
        while(dum1)
        {
            val=dum1->val;
            while(dum2 && dum2->val==val) dum2=dum2->next;
            dum1->next=dum2;
            dum1=dum2;
        }
        return head;
    }
};