class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s="";
        while(head)
        {
            s+=(head->val+'0');
            head=head->next;
        }
        return stoi(s,0,2);
    }
};