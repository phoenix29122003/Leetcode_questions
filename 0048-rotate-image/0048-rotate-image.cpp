class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int m=nums.size(),n=nums[0].size();
        for(int i=0;i<m;i++)
            for(int j=i;j<n;j++) swap(nums[i][j],nums[j][i]);
        for(int i=0;i<m;i++) reverse(nums[i].begin(),nums[i].end());
    }
};