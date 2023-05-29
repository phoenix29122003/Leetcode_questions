class Solution {
public:
    int solve(vector<int>costs,int i,vector<bool>map,vector<int>&dp)
    {
        if(i>365) return 0;
        if(dp[i]!=-1) return dp[i];
        if(!map[i]) return dp[i]=solve(costs,i+1,map,dp);
        return dp[i]=min({costs[0]+solve(costs,i+1,map,dp),
                           costs[1]+solve(costs,i+7,map,dp),
                           costs[2]+solve(costs,i+30,map,dp)});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<bool>map(366,false);
        vector<int>dp(366,-1);
        for(int i=0;i<days.size();i++) map[days[i]]=true;
        return solve(costs,0,map,dp);
    }
};