class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        if(n<4) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long x=(long long)target-(long long)nums[i]-(long long)nums[j];
                int l=j+1,r=n-1;
                while(l<r)
                {
                    if(nums[l]+nums[r]==x){
                        ans.push_back({nums[i],nums[j],nums[l++],nums[r--]});
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    } 
                    else if(nums[l]+nums[r]<x) l++;
                    else r--;
                }
                while(j+1<n && nums[j]==nums[j+1]) j++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};