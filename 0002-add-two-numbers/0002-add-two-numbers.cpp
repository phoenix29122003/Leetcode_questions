class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dum=new ListNode(0);
        ListNode *curr=dum;
        int sum=0,carry=0;
        while(l1 || l2 || carry)
        {
            int x=l1?l1->val:0;
            int y=l2?l2->val:0;
            sum=x+y+carry;
            carry=sum/10;
            sum=sum%10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        return dum->next;
    }
};