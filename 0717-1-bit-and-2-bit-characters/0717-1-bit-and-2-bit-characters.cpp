class Solution {
public:
    bool isOneBitCharacter(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n-1){
            if(nums[i]==0) i++;
            else{
                if(nums[i+1]==0 || nums[i+1]==1) i+=2;
            }
        }
        return i==n-1;
    }
};