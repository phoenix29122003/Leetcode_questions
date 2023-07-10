class Solution {
public:
    int maxDistToClosest(vector<int>& nums) {
        int last=-1,ans=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) 
            {
                ans=last==-1?i:max(ans,(i-last)/2);
                last=i;
            }
        }
        return max(ans,n-last-1);
    }
};