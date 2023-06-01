//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int sortingCost(int N, int arr[]){
        // code here
        map<int,int> mp;
        int mx =0;
        for(int i=0;i<N;i++)
        {
           if(mp.find(arr[i]-1)!=mp.end()) mp[arr[i]] = mp[arr[i]-1];
           mp[arr[i]]++;
           mx = max(mx ,mp[arr[i]]);
        }
        
        return N-mx;
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
        
        cout<<ob.sortingCost(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends