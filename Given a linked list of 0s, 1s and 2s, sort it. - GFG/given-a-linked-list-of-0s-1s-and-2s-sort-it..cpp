//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node *zerod=new Node(0),*oned=new Node(0),*twod=new Node(0);
        Node *zero=zerod,*one=oned,*two=twod;
        Node *curr=head;
        while(curr)
        {
            if(curr->data==0)
            {
                zero->next=new Node(0);
                zero=zero->next;
            }
            else if(curr->data==1)
            {
                one->next=new Node(1);
                one=one->next;
            }
            else
            {
                two->next=new Node(2);
                two=two->next;
            }
            curr=curr->next;
        }
        zero->next=oned->next?oned->next:twod->next;
        one->next=twod->next;
        two->next=NULL;
        head=zerod->next;
        delete(zerod),delete(oned),delete(twod);
        return head;
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends