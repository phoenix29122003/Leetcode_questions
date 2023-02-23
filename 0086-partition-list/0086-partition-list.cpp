class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int>sm,bg;
        ListNode *curr=head;
        while(curr)
        {
            if(curr->val<x) sm.push_back(curr->val);
            else bg.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        int i=0;
        while(i<sm.size())
        {
            curr->val=sm[i++];
            curr=curr->next;
        }
        i=0;
        while(i<bg.size())
        {
            curr->val=bg[i++];
            curr=curr->next;
        }
        return head;
    }
};