class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n+1,1),suff(n+1,1),ans;
        for(int i=1;i<=n;i++) pref[i]=pref[i-1]*nums[i-1];
        for(int i=n-1;i>=0;i--) suff[i]=suff[i+1]*nums[i];
        for(int i=1;i<=n;i++) ans.push_back(pref[i-1]*suff[i]);
        return ans;
    }
};