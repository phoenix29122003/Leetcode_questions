class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int idx=abs(nums[i]);
            if(nums[idx-1]<0) return abs(nums[i]);
            else nums[idx-1]=-nums[idx-1];
        }
        return 0;
    }
};