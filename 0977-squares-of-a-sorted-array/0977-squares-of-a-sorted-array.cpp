class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        int l=0,r=n-1,k=n-1;
        while(l<=r && k>=0){
            if(abs(nums[l])<=abs(nums[r])) ans[k--]=nums[r]*nums[r--];
            else ans[k--]=nums[l]*nums[l++];
        }
        return ans;
    }
};