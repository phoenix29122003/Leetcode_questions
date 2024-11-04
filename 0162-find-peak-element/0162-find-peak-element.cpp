class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        else if(nums[0]>nums[1]) return 0;
        else if(nums[n-2]<nums[n-1]) return n-1;
        int i=0,j=n-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m-1]<nums[m] && nums[m]>nums[m+1]) return m;
            else if(nums[m]<nums[m+1]) i=m+1;
            else if(nums[m]>nums[m+1]) j=m;
        }
        return i;
    }
};