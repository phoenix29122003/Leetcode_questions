class Solution {
public:
    void solve(vector<vector<int>>& graph,int src,int dest,vector<int>ds,vector<vector<int>>&ans){
        if(src==dest-1){
            ds.push_back(src);
            ans.push_back(ds);
            return;
        }
        ds.push_back(src);
        for(auto it:graph[src]){
            solve(graph,it,dest,ds,ans);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(graph,0,graph.size(),ds,ans);
        return ans;
    }
};