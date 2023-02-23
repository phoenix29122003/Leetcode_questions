class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *prev=NULL,*curr=head;
        while(curr && curr->next)
        {
            if(curr->val==curr->next->val) 
            {
                while(curr->next && curr->val==curr->next->val) curr=curr->next;
                if(!prev) head=curr->next;
                else prev->next=curr->next;
            }
            else prev=curr;
            curr=curr->next;
        }
        return head;
    }
};