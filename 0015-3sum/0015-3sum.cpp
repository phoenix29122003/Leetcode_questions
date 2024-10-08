class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        if(n==0) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            long long target=0-(long long)nums[i];
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[j]+nums[k]==target){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++,k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
                else if(nums[j]+nums[k]<target) j++;
                else k--;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};