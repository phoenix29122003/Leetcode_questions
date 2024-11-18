class Solution {
public:
    bool dfs(int node,unordered_map<int,vector<int>>&graph,vector<int>&visited,int color){
        visited[node]=color;
        for(auto neigh:graph[node]){
            if(visited[neigh]==0 && dfs(neigh,graph,visited,-color)==false) return false;
            else if(visited[neigh]==visited[node]) return false;
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        unordered_map<int,vector<int>>graph;
        for(auto edge:dislikes){
            int u=edge[0],v=edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int>visited(n+1,0);
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                if(dfs(i,graph,visited,1)==false) return false;
            }
        }
        return true;
    }
};