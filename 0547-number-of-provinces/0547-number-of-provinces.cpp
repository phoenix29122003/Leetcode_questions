class Solution {
public:
    void solve(vector<vector<int>>& graph,vector<int>&vis,int src)
    {
        vis[src]=true;
        for(int j=0;j<graph.size();j++) if(!vis[j] && graph[src][j]==1) solve(graph,vis,j);
    }
    int findCircleNum(vector<vector<int>>& graph) {
        int n=graph.size(),ans=0;
        vector<int>vis(n,false);
        for(int i=0;i<n;i++) if(!vis[i]) ans++,solve(graph,vis,i);
        return ans;
    }
};