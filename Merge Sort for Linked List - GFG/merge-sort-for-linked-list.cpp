//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
      void splitList(Node* source, Node** frontRef, Node** backRef) {
        struct Node* fast;
        struct Node* slow;
        if(source==NULL || source->next==NULL)
        {
            *frontRef=source;
            *backRef=NULL;
        } 
        else 
        {
            slow=source;
            fast=source->next;
            while(fast!=NULL)
            {
                fast=fast->next;
                if(fast!=NULL)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
            }
            *frontRef=source;
            *backRef=slow->next;
            slow->next=NULL;
        }
    }
    
    
    Node* mergeList(struct Node* a, struct Node* b) {
        struct Node* result=NULL;
        if(a==NULL) return (b);
        else if(b==NULL) return (a);
        if(a->data<=b->data)
        {
            a->next=mergeList(a->next, b);
            return a;
        } 
        else 
        {
            b->next=mergeList(a,b->next);
            return b;
        }
    }
    
    
    Node* mergeSort(Node* head) {
        struct Node* a;
        struct Node* b;
        if(head==NULL || head->next==NULL) return head;
        splitList(head, &a, &b);
        a=mergeSort(a);
        b=mergeSort(b);
        return mergeList(a,b);
    }
 
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends