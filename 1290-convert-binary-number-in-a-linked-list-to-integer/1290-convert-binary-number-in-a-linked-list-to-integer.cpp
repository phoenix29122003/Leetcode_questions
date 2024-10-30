class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0,cnt=0;
        ListNode *dum=head;
        while(dum){
            cnt++;
            dum=dum->next;
        }
        cnt--;
        while(head){
            ans+=pow(2,cnt)*(head->val);
            head=head->next;
            cnt--;
        }
        return ans;
    }
};