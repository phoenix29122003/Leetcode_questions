class Solution {
public:
    void solve(unordered_map<int,vector<int>>mp,int sr,int ed,vector<bool>vis,vector<int>ds,vector<vector<int>>&ans){
        if(sr==ed){
            ds.push_back(sr);
            ans.push_back(ds);
            return;
        }
        ds.push_back(sr);
        vis[sr]=true;
        for(auto it:mp[sr])
            if(vis[it]==false)
                solve(mp,it,ed,vis,ds,ans);
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>ds;
        vector<bool>vis(graph.size(),false);
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<graph.size();i++)
            for(int j=0;j<graph[i].size();j++) mp[i].push_back(graph[i][j]);
        solve(mp,0,graph.size()-1,vis,ds,ans);
        return ans;
    }
};