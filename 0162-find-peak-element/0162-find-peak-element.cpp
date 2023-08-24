class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-2]<nums[n-1]) return n-1;
        int l=1,h=n-2;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m-1]<nums[m] &&  nums[m]>nums[m+1]) return m;
            else if(nums[m]<nums[m+1]) l=m+1;
            else if(nums[m-1]>nums[m]) h=m-1;
        }
        return -1;
    }
};