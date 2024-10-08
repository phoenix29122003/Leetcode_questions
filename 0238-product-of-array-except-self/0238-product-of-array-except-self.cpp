class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>lp(n+1,1);
        vector<int>rp(n+1,1);
        for(int i=1;i<=n;i++) lp[i]=lp[i-1]*nums[i-1];
        for(int i=n-1;i>=0;i--) rp[i]=rp[i+1]*nums[i];
        
        for(int i=0;i<n;i++) ans.push_back(lp[i]*rp[i+1]);
        return ans;
    }
};