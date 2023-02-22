class Solution {
public:
    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
        ListNode *h1=ha,*h2=hb;
        if(h1==NULL || h2==NULL) return NULL;
        while(h1 && h2 && h1!=h2)
        {
            h1=h1->next;
            h2=h2->next;
            if(h1==h2) return h1;
            if(h1==NULL) h1=hb;
            if(h2==NULL) h2=ha;
        }
        return h1;
    }
};