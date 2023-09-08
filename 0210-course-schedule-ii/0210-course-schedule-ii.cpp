class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int>ans;
        unordered_map<int,vector<int>>graph;
        vector<int>indegree(n,0);
        queue<int>q;
        for(auto it:pre){
            graph[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        for(int i=0;i<n;i++)
            if(indegree[i]==0) q.push(i);
        while(q.size()){
            auto curr=q.front();
            q.pop();
            ans.push_back(curr);
            for(auto it:graph[curr]){
                if(--indegree[it]==0) q.push(it);
            }
        }
        if(ans.size()==n) return ans;
        vector<int>res;
        return res;
    }
};   