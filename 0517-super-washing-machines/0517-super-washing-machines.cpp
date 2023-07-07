class Solution {
public:
    int findMinMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto it:nums) sum+=it;
        if(sum%n!=0) return -1;
        int avg=sum/n;
        vector<int>left(n,0);
        vector<int>right(n,0);
        for(int i=1;i<n;i++) left[i]=left[i-1]+nums[i-1];
        for(int i=n-2;i>=0;i--) right[i]=right[i+1]+nums[i+1];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int expleft=i*avg;
            int expright=(n-i-1)*avg;
            int leftm=0,rightm=0;
            if(expleft>left[i]) leftm=expleft-left[i];
            if(expright>right[i]) rightm=expright-right[i];
            ans=max(ans,leftm+rightm);
        }
        return ans;
    }
};