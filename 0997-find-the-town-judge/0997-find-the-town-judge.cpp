class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indegree(n+1,0),outdegree(n+1,0);
        for(auto it:trust){
            int i=it[0],j=it[1];
            indegree[j]++;
            outdegree[i]++;
        }
        for(int i=1;i<=n;i++){
            if(indegree[i]==n-1 && outdegree[i]==0) return i;
        }
        return -1;
    }
};