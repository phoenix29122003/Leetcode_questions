class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode *dum=head;
        while(dum){
            dum=dum->next;
            cnt++;
        }
        if(cnt==n) return head->next;
        ListNode *slow=head,*fast=head;
        while(n--){
            fast=fast->next;
        }
        ListNode *prev=head;
        while(fast){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=slow->next;
        return head;
    }
};