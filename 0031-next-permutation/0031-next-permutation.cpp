class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2,idx=-1;
        while(i>=0){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
            i--;
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int j=n-1;
        while(j>idx){
            if(nums[j]>nums[idx]){
                swap(nums[j],nums[idx]);
                break;
            }
            j--;
        }
        reverse(nums.begin()+idx+1,nums.end());
    }
};