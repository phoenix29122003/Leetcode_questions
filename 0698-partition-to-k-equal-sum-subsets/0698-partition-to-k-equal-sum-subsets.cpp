class Solution {
public:
bool solve(vector<int>& nums,int idx,int sum,int curr,vector<bool>&vis,int k)
    {
        if(k==1) return true;
        if(idx>=nums.size()) return false;
        if(curr==sum) return solve(nums,0,sum,0,vis,k-1);
        for(int i=idx;i<nums.size();i++)
        {
            if(!vis[i] && curr+nums[i]<=sum)
            {
                vis[i]=true;
                if(solve(nums,i+1,sum,curr+nums[i],vis,k)) return true;
                vis[i]=false;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(nums.size()<k || sum%k) return false;
        vector<bool>vis(nums.size(),false);
        sort(nums.begin(),nums.end(),greater<int>());
        return solve(nums,0,sum/k,0,vis,k);
    }
};