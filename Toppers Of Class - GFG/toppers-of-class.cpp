//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int marks,index;
};

void kTop(node a[],int n);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        node a[n];
        for(int i=0;i<n;i++)
        cin>>a[i].marks,a[i].index=i;
        kTop(a,n);
        int k;
        cin>>k;
        int i=0;
        for(int j=0;j<k;j++)
        {
            int x=a[i].marks;
            while(i < n and a[i].marks==x)
            cout<<a[i].index<<" ",i++;
            if(i == n)
                break;
        }
        cout<<endl;
    }
}
// } Driver Code Ends

bool cmp(node a1,node a2)
{
    if(a1.marks==a2.marks) return a1.index<a2.index;
    return a1.marks>a2.marks;
}
void kTop(node a[],int n)
{
    // Your code goes here
    sort(a,a+n,cmp);
}
