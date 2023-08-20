class Solution {
public:
    void dfs(map<int,vector<int>>mp,int sr,vector<bool>&vis){
        vis[sr]=true;
        for(auto it:mp[sr]){
            if(vis[it]==false) dfs(mp,it,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& graph) {
        int n=graph.size(),ans=0;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(graph[i][j]==1) mp[i].push_back(j);
        for(auto it:mp){
            cout<<it.first<<" ";
            for(auto it2:it.second) cout<<it2<<" ";
            cout<<endl;
        }
        vector<bool>vis(n,false);
        for(auto it:mp){
            if(vis[it.first]==false){
                ans++;
                dfs(mp,it.first,vis);
            }
        }
        return ans;
    }
};