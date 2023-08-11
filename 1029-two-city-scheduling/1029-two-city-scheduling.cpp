class Solution {
public:
    static bool comp(const vector<int>&a,const vector<int>&b)
    {
        return a[1]-a[0]<b[1]-b[0];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),comp);
        int ans=0,n=costs.size();
        for(int i=0;i<n/2;i++) ans+=costs[i][1];
        for(int i=n/2;i<n;i++) ans+=costs[i][0];
        return ans;
    }
};