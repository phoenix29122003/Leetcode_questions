class Solution {
public:
    void dfs(unordered_map<int,vector<int>>&mp,unordered_map<int,bool>&vis,int start,vector<int>&ans){
        ans.push_back(start);
        vis[start]=true;
        for(auto it:mp[start]){
            if(vis[it]==false){
                dfs(mp,vis,it,ans);
            }
        }
    }
    vector<int> restoreArray(vector<vector<int>>& pairs) {
        int n=pairs.size()+1;
        vector<int>ans;
        unordered_map<int,bool>vis;
        unordered_map<int,vector<int>>mp;
        for(auto it:pairs){
            vis[it[0]]=false;
            vis[it[1]]=false;
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        int start;
        for(auto it:mp){
            if(it.second.size()==1){
                start=it.first;
                break;
            }
        }
        ans.push_back(start);
        vis[start]=true;
        dfs(mp,vis,mp[start][0],ans);
        return ans;
    }
};