class Solution {
public:
    void solve(vector<int>nums,int idx,vector<vector<int>>&ans){
        if(idx==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            if(i!=idx && nums[i]==nums[idx]) continue;
            swap(nums[idx],nums[i]);
            solve(nums,idx+1,ans);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        solve(nums,0,ans);
        return ans;
    }
};