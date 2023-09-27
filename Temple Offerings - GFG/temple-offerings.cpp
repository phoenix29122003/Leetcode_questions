//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int offerings(int n, int arr[]){
        // code here
        vector<int>lr(n,1),rl(n,1);
        for(int i=1;i<n;i++) if(arr[i-1]<arr[i]) lr[i]=lr[i-1]+1;
        for(int i=n-2;i>=0;i--) if(arr[i]>arr[i+1]) rl[i]=rl[i+1]+1;
        int ans=0;
        for(int i=0;i<n;i++) ans+=max(lr[i],rl[i]);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.offerings(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends