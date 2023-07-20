class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *head1=head,*head2=head,*kth=NULL;
        while(--k) head1=head1->next;
        kth=head1;
        head1=head1->next;
        while(head1)
        {
            head1=head1->next;
            head2=head2->next;
        }
        swap(head2->val,kth->val);
        return head;
    }
};