class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int ans=0,cnt=0,curr_diff=0,prev_diff=nums[1]-nums[0];
        for(int i=1;i<n-1;i++)
        {
            curr_diff=nums[i+1]-nums[i];
            if(curr_diff==prev_diff) cnt++;
            else 
            {
                prev_diff=curr_diff;
                cnt=0;
            }
            ans+=cnt;
        }
        return ans;
    }
};