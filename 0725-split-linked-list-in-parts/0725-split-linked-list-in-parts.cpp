class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {        
        int len=0;
        ListNode* temp=head;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        int numNodes=len/k;
        int extra=len%k;  
        vector<ListNode*>res;
        temp=head;
        while(temp)
        {
            res.push_back(temp);
            int currLen=1;
            while(currLen<numNodes)
            {
                temp=temp->next;
                currLen++;
            }
            if(extra>0 && len>k)
            {
                temp=temp->next;
                extra--;
            }
            ListNode* x=temp->next;
            temp->next=NULL;
            temp=x;
        }
        while(len<k)
        {
            res.push_back(NULL);
            len++;
        }
        return res;
    }
};