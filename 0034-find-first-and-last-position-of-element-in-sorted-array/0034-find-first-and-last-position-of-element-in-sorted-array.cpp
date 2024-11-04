class Solution {
public:
    int firstIdx(vector<int>&nums,int i,int j,int target){
        int ans=-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]==target){
                ans=m;
                j=m-1;
            }
            else if(nums[m]<target) i=m+1;
            else j=m-1;
        }
        return ans;
    }
    int secondIdx(vector<int>&nums,int i,int j,int target){
        int ans=-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]==target){
                ans=m;
                i=m+1;
            }
            else if(nums[m]<target) i=m+1;
            else j=m-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fIdx=firstIdx(nums,0,nums.size()-1,target);
        int sIdx=secondIdx(nums,0,nums.size()-1,target);
        return {fIdx,sIdx};
    }
};