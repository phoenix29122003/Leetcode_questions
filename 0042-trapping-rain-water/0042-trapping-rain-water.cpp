class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size(),ans=0;
        vector<int>lr(n+1,0),rl(n+1,0);
        for(int i=1;i<=n;i++) lr[i]=max(lr[i-1],nums[i-1]);
        for(int i=n-1;i>=0;i--) rl[i]=max(rl[i+1],nums[i]);
        for(int i=1;i<=n;i++){
            int miniwall=min(lr[i-1],rl[i]);
            if(miniwall<=nums[i-1]) ans+=0;
            else ans+=min(lr[i-1],rl[i])-nums[i-1];
        }
        return ans;
    }
};