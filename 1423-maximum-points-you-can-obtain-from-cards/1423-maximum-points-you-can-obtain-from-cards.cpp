class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int curr=0,ans=0,n=nums.size();
        for(int i=0;i<k;i++) curr+=nums[i];
        ans=max(ans,curr);
        for(int i=0;i<k;i++){
            curr-=nums[k-1-i];
            curr+=nums[n-1-i];
            ans=max(ans,curr);
        }
        return ans;
    }
};