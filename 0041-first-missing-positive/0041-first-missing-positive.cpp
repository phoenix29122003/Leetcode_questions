class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int>dum(n,-1);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0 && nums[i]<=n) dum[nums[i]-1]=1;
        }
        for(int i=0;i<n;i++) 
        {
            if(dum[i]==-1) return i+1;
        }
        return n+1;
    }
};