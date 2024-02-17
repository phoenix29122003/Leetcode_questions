class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int x=(long long)target-(long long)nums[i]-(long long)nums[j];
                int k=j+1,l=n-1;
                while(k<l){
                    if(nums[k]+nums[l]==x){
                        ans.push_back({nums[i],nums[j],nums[k++],nums[l--]});
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if(nums[k]+nums[l]<x) k++;
                    else l--;
                }
                while(j+1<n && nums[j]==nums[j+1]) j++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};