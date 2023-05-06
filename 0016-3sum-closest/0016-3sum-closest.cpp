class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff=INT_MAX,ans;
        for(int i=0;i<n;i++)
        {
            int s=i+1,e=n-1;
            while(s<e)
            {
                if(nums[i]+nums[s]+nums[e]==target) return target;
                else if(abs((nums[i]+nums[s]+nums[e])-target)<diff)
                {
                    ans=nums[i]+nums[s]+nums[e];
                    diff=abs((nums[i]+nums[s]+nums[e])-target);
                }
                else if(nums[i]+nums[s]+nums[e]<target) s++;
                else e--;
            }
        }
        return ans;
    }
};