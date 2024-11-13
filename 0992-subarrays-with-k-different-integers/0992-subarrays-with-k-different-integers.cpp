class Solution {
public:
    int solve(vector<int>&nums,int k){
        unordered_map<int,int>mp;
        int left=0,right=0,ans=0,n=nums.size();
        while(left<n && right<n){
            mp[nums[right]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0) mp.erase(nums[left]);
                left++;
            }
            right++;
            ans+=right-left+1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};