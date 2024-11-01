class Solution {
public:
    void dfs(unordered_map<int,vector<int>>&graph,vector<bool>&visited,int node){
        visited[node]=true;
        for(auto nbr:graph[node]){
            if(visited[nbr]==false) dfs(graph,visited,nbr);
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
        int n=grid.size(),ans=0;
        unordered_map<int,vector<int>>graph;
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && grid[i][j]==1) graph[i].push_back(j);
            }
        }
        for(auto node:graph){
            cout<<node.first<<": ";
            for(auto it:graph[node.first]) cout<<it<<" ";
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                ans++;
                dfs(graph,visited,i);
            }
        }
        return ans;
    }
};