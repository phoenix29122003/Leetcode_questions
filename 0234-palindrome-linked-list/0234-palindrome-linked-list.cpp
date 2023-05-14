/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
        string s="";
        ListNode *dum=head;
        while(dum)
        {
            s+=dum->val;
            dum=dum->next;
        }
        dum=reverseList(head);
        string p="";
        while(dum)
        {
            p+=dum->val;
            dum=dum->next;
        }
        return s==p;
    }
};