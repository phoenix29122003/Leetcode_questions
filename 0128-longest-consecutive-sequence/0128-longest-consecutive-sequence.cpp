class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int curr=1,ans=0,prev;
        for(int i=1;i<n;i++)
        {
            prev=nums[i-1];
            if(prev+1==nums[i]) curr++;
            else if(prev==nums[i]) continue;
            else
            {
                ans=max(ans,curr);
                curr=1;
            }
        }
        ans=max(ans,curr);
        return ans;
    }
};