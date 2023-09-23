//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums){
	    int n=nums.size();
	    vector<int>lr(n,1),rl(n,1);
	    for(int i=0;i<n;i++)
	        for(int j=0;j<i;j++) if(nums[j]<nums[i]) lr[i]=max(lr[i],lr[j]+1);
	    for(int i=n-1;i>=0;i--)
	        for(int j=n-1;j>i;j--) if(nums[i]>nums[j]) rl[i]=max(rl[i],rl[j]+1);
	    int ans=0;
	    for(int i=0;i<n;i++) ans=max(ans,lr[i]+rl[i]-1);
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends