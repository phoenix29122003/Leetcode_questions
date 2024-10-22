class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size(),ans=0;
        vector<int>lm(n,0),rm(n,0);
        for(int i=1;i<n;i++) lm[i]=max(lm[i-1],nums[i-1]);
        for(int i=n-2;i>=0;i--) rm[i]=max(rm[i+1],nums[i+1]);
        for(int i=0;i<n;i++) cout<<lm[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++) cout<<rm[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++){
            int minh=min(lm[i],rm[i]);
            if(minh-nums[i]>0) ans+=minh-nums[i];
        }
        return ans;
    }
};