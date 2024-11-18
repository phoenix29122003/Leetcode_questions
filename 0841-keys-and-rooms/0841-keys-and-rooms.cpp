class Solution {
public:
    void dfs(int node,vector<vector<int>>&graph,vector<int>&visited){
        for(auto key:graph[node]){
            if(visited[key]==1) continue;
            else{
                visited[key]=1;
                dfs(key,graph,visited);
            }
        }
    } 
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>visited(n,0);
        visited[0]=1;
        dfs(0,rooms,visited);
        for(int i=0;i<n;i++){
            if(!visited[i]) return false;
        }
        return true;
    }
};