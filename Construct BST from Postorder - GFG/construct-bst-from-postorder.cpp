//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}

// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/

unordered_map<int, int> mp;
    Node* build(vector<int>&in,vector<int>&post,int left,int right,int&ri)
    {
        if(left>right) return NULL;
        Node* root=new Node(post[ri--]);
        int pi=mp[root->data];
        root->right=build(in,post,pi+1,right,ri);
        root->left=build(in,post,left,pi-1,ri);
        return root;
    }
Node *constructTree (int post[], int size)
{
//code herevector<int>inorder;
    vector<int>postorder,inorder;
    for(int i=0;i<size;i++) postorder.push_back(post[i]),inorder.push_back(post[i]);
    sort(inorder.begin(),inorder.end());
    for(int i=0;i<size;i++) mp[inorder[i]]=i;
    int n=size,postIdx=n-1;
    return build(inorder,postorder,0,n-1,postIdx);
}