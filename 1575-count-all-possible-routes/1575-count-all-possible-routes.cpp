class Solution {
public:
    int dp[101][201];
    int MOD=1000000007;
    int solve(vector<int>&nums,int curr,int finish,int fuel)
    {
        if(fuel<0) return 0;
        if(dp[curr][fuel]!=-1) return dp[curr][fuel];
        int ans=curr==finish?1:0;
        for(int i=0;i<nums.size();i++)
        {
            if(curr!=i && fuel>=abs(nums[i]-nums[curr])) ans=(ans+solve(nums,i,finish,fuel-abs(nums[i]-nums[curr])))%MOD;
        }
        return dp[curr][fuel]=ans;
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n=locations.size();
        memset(dp,-1,sizeof(dp));
        return solve(locations,start,finish,fuel);
    }
};