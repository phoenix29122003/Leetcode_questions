class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dum=new ListNode(0);
        ListNode *head=dum;
        while(list1 && list2){
            if(list1->val<=list2->val){
                dum->next=list1;
                list1=list1->next;
                dum=dum->next;
            }else{
                dum->next=list2;
                list2=list2->next;
                dum=dum->next;
            }
        }
        if(list1) dum->next=list1;
        if(list2) dum->next=list2;
        return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        ListNode *head=lists[0];
        for(int i=1;i<lists.size();i++){
            head=mergeTwoLists(head,lists[i]);
        }
        return head;
    }
};