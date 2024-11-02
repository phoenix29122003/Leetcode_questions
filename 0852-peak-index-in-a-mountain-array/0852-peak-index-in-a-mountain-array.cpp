class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int i=0,j=nums.size()-1,n=nums.size();
        while(i<j){
            int m=(i+j)/2;
            if(nums[m]<nums[m+1]) i=m+1;
            else j=m;
        }
        return i;
    }
};