class Solution {
public:
    int dp[366];
    int solve(vector<bool>&cal,int idx,int n,vector<int>&cost){
        if(idx>=n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int tempcost;
        if(cal[idx]){
            tempcost=min({cost[0]+solve(cal,idx+1,n,cost),
                          cost[1]+solve(cal,idx+7,n,cost),
                          cost[2]+solve(cal,idx+30,n,cost)});
        }
        else tempcost=0+solve(cal,idx+1,n,cost);
        return dp[idx]=tempcost;
    }
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        vector<bool>cal(366,false);
        for(auto it:days) cal[it]=true;
        return solve(cal,1,cal.size(),cost);
    }
};