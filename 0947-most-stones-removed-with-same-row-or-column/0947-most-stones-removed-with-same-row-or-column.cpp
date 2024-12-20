class Solution {
public:
    void dfs(int currIdx,vector<vector<int>>& stones,vector<int>&visited){
        visited[currIdx]=1;
        for(int i=0;i<stones.size();i++){
            if(visited[i]==0 && (stones[i][0]==stones[currIdx][0] || stones[i][1]==stones[currIdx][1])) dfs(i,stones,visited);
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int>visited(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                cnt++;
                dfs(i,stones,visited);
            }
        }
        return n-cnt;
    }
};