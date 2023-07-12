class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int currsum1=0,currsum2=0;
        int currmax=nums[0],currmin=nums[0];
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
            currsum1+=nums[i],currsum2+=nums[i];
            currmax=max(currmax,currsum1);
            currmin=min(currmin,currsum2);
            if(currsum1<0) currsum1=0;
            if(currsum2>0) currsum2=0;
        }
        return total==currmin?currmax:max(currmax,total-currmin);
    }
};
