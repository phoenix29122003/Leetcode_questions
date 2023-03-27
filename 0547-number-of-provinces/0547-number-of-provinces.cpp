class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<bool>&vis,int i)
    {
        vis[i]=true;
        for(int j=0;j<graph.size();j++) if(graph[i][j] && !vis[j]) dfs(graph,vis,j);
    }
    int findCircleNum(vector<vector<int>>& graph) {
        int n=graph.size(),ans=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++)
        {
            if(!vis[i]) ans++,dfs(graph,vis,i);
        }
        return ans;
    }
};