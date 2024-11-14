class Solution {
public:
    int dfs(int headID,vector<int>& informTime,unordered_map<int,vector<int>>&graph){
        int time=informTime[headID],level_time=0;
        for(auto it:graph[headID]){
            level_time=max(level_time,dfs(it,informTime,graph));
        }
        return time+level_time;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>>graph;
        for(int i=0;i<manager.size();i++){
            graph[manager[i]].push_back(i);
        }
        return dfs(headID,informTime,graph);
    }
};