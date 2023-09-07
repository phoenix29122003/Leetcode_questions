class Solution {
public:
    int candy(vector<int>& nums) {
        int ans=0,n=nums.size();
        vector<int>lr(n,1),rl(n,1);
        for(int i=1;i<n;i++) if(nums[i-1]<nums[i]) lr[i]=lr[i-1]+1;
        for(int i=n-2;i>=0;i--) if(nums[i]>nums[i+1]) rl[i]=rl[i+1]+1;
        for(int i=0;i<n;i++) ans+=max(lr[i],rl[i]);
        return ans;
    }
};