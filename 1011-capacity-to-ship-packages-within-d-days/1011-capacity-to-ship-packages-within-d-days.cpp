class Solution {
public:
    bool solve(vector<int>&nums,int m,int d)
    {
        int cnt=1,curr_sum=0;
        for(auto it:nums)
        {
            if(curr_sum+it<=m) curr_sum+=it;
            else curr_sum=it,cnt++;
        }
        return cnt<=d;
    }
    int shipWithinDays(vector<int>& nums, int d) {
        int l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
        int ans=INT_MAX;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(solve(nums,m,d)) ans=m,r=m-1;
            else l=m+1;
        }
        return ans;
    }
};