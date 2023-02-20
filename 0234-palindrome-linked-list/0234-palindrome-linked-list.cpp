class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL,*next=NULL;
        while(head)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        vector<int>num1,num2;
        ListNode *dum1=head;
        while(dum1)
        {
            num1.push_back(dum1->val);
            dum1=dum1->next;
        }
        ListNode *dum2=reverseList(head);
        while(dum2)
        {
            num2.push_back(dum2->val);
            dum2=dum2->next;
        }
        if(num1==num2) return true;
        else return false;
    }
};