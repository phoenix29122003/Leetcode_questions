class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]==target) return m;
            if(nums[i]<=nums[m]){
                if(nums[i]<=target && target<nums[m]) j=m-1;
                else i=m+1;
            }
            if(nums[m]<=nums[j]){
                if(nums[m]<target && target<=nums[j]) i=m+1;
                else j=m-1;
            }
        }
        return -1;
    }
};