class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int ans=0,curr=0;
        for(int i=0;i<k;i++) curr+=nums[i];
        ans=curr;
        int j=1;
        for(int i=k-1;i>=0;i--)
        {
            curr-=nums[i];
            curr+=nums[nums.size()-j];
            ans=max(ans,curr);
            j++;
        }
        return ans;
    }
};