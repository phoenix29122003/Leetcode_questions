class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        vector<int>ldp(n,1),rdp(n,1);
        
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
                if(nums[i]>nums[j]) ldp[i]=max(ldp[i],ldp[j]+1);
        
        for(int i=n-2;i>=0;i--)
            for(int j=n-1;j>i;j--)
                if(nums[i]>nums[j]) rdp[i]=max(rdp[i],rdp[j]+1);
        
        int maxi=0;
        for(int i=1;i<n-1;i++){
            if(ldp[i]>1 && rdp[i]>1){
                int ans=ldp[i]+rdp[i]-1;
                maxi=max(maxi,ans);
            }
        }
        return n-maxi;
    }
};