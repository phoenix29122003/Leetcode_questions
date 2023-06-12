class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>dum(n,0);
        for(int i=0;i<n;i++)
        {
            if(dum[nums[i]-1]==0) dum[nums[i]-1]=1;
            else 
            {
                dum[nums[i]-1]=0;
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};