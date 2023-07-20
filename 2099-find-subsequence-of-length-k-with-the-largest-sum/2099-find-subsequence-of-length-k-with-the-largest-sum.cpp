class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {     
        int n=nums.size(),i=0;
        vector<int>ans;
        while(k--){
            ans.push_back(nums[i++]);
        }
        for(int j=i;j<n;j++)
        {
            int mini=min_element(ans.begin(),ans.end())-ans.begin();
            if(ans[mini]<nums[j]){
                ans.erase(ans.begin()+mini);
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};