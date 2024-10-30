class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast){
            while(slow && fast && slow->val==fast->val) fast=fast->next;
            slow->next=fast;
            slow=fast;
        }
        return head;
    }
};