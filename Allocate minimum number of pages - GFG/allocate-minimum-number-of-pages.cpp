//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

   //User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool solve(int arr[],int n,int m,int curr_min)
    {
        int studentsRequired=1;
        int curr_sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>curr_min) return false;
            if(curr_sum+arr[i]>curr_min)
            {
                studentsRequired++;
                curr_sum=arr[i];
                if(studentsRequired>m) return false;
            }
            else curr_sum+=arr[i];
        }
        return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        if(m>n) return -1;
        long long sum=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++) 
        {
            mx=max(mx,arr[i]);
            sum+=arr[i];
        }
        int result=INT_MAX;
        int l=mx,r=sum;
        while(l<=r)
        {
            int k=(l+r)/2;
            if(solve(arr,n,m,k))
            {
                result=k;
                r=k-1;
            }
            else l=k+1;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends