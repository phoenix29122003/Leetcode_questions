class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
        while(lo<hi)
        {
            int mi=(lo+hi)/2;
            if(nums[hi]<nums[mi]) lo=mi+1;
            else if(nums[mi]<nums[lo]) hi=mi,lo++;
            else hi--;
        }
        return nums[lo];
    }
};