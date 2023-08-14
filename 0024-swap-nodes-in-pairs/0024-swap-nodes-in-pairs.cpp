class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode *headn=head->next;
        ListNode *headnn=headn->next;
        headn->next=head;
        head->next=swapPairs(headnn);
        return headn;
    }
};