class Solution {
public:
    void solve(vector<vector<int>>& graph,vector<bool>&vis,int src)
    {
        vis[src]=true;
        for(int j=0;j<graph.size();j++) if(graph[src][j] && !vis[j]) solve(graph,vis,j);
    }
    int findCircleNum(vector<vector<int>>& graph) {
        int ans=0,n=graph.size();
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++)
        {
            if(!vis[i]) ans++,solve(graph,vis,i);
        }
        return ans;
    }
};