class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int l=1,r=1,ans=nums[0];
        for(int i=0;i<n;i++)
        {
            l=l==0?1:l;
            r=r==0?1:r;
            l*=nums[i];
            r*=nums[n-1-i];
            ans=max(ans,max(l,r));
        }
        return ans;
    }
};
