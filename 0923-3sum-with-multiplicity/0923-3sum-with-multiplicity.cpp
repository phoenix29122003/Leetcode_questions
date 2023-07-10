class Solution {
public:
    int threeSumMulti(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0,mod=1000000007;
        for(int i=0;i<n-1;i++)
        {
            int lo=i+1,hi=n-1;
            while(lo<hi)
            {
                if(nums[i]+nums[lo]+nums[hi]==target)
                {
                    int cntlo=1,cnthi=1;
                    while(lo<hi && nums[lo]==nums[lo+1]) lo++,cntlo++;
                    while(lo<hi && nums[hi]==nums[hi-1]) hi--,cnthi++;
                    if(lo==hi) ans=(ans+(cntlo*(cntlo-1))/2)%mod;
                    else ans=(ans+cntlo*cnthi)%mod;
                    lo++,hi--;
                }
                else if(nums[i]+nums[lo]+nums[hi]>target) hi--;
                else lo++;
            }
        }
        return ans;
    }
};