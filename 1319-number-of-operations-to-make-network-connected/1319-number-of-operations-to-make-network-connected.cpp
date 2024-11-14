class Solution {
public:
    void dfs(unordered_map<int,vector<int>>&graph,int node,vector<int>&visited){
        visited[node]=true;
        for(auto neigh:graph[node]){
            if(visited[neigh]==false){
                dfs(graph,neigh,visited);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m=connections.size();
        if(m<n-1) return -1;
        int cnt=0;
        unordered_map<int,vector<int>>graph;
        for(auto it:connections){
            int from=it[0],to=it[1];
            graph[from].push_back(to);
            graph[to].push_back(from);
        }
        vector<int>visited(n,false);
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                cnt++;
                dfs(graph,i,visited);
            }
        }
        return cnt-1;
    }
};