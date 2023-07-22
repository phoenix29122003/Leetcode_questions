class Solution {
public:
    bool iscycle(vector<vector<int>>&adj,vector<int>&vis,int id)
    {
        if(vis[id]==1) return true;
        if(vis[id]==0){
            vis[id]=1;
            for(auto edge:adj[id]){
                if(iscycle(adj,vis,edge)) return true;
            }
        }
        vis[id]=2;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& edge) {
        vector<vector<int>>adj(n);
        for(auto it:edge) adj[it[1]].push_back(it[0]);
        vector<int>vis(n,0);
        for(int i=0;i<n;i++) if(iscycle(adj,vis,i)) return false;
        return true;
    }
};