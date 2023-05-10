class Solution {
public:
    int trap(vector<int>& nums) {
        nums.insert(nums.begin(),0),nums.push_back(0);
        int n=nums.size(),ans=0;
        vector<int>pref(n,0);
        vector<int>suff(n,0);
        pref[0]=0,suff[n-1]=0;
        for(int i=1;i<n;i++) pref[i]=max(pref[i-1],nums[i]);
        for(int i=n-2;i>=0;i--) suff[i]=max(suff[i+1],nums[i]);
        for(int i=1;i<=n-2;i++)
        {
            int height=min(pref[i-1],suff[i+1]);
            if(height-nums[i]<=0) ans+=0;
            else ans+=height-nums[i];
        }
        return ans;
    }
};