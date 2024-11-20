class Solution {
public:
    int solve(int id,unordered_map<int,Employee*>graph){
        int ans=graph[id]->importance;
        for(auto neigh:graph[id]->subordinates){
            ans+=solve(neigh,graph);
        }
        return ans;
    }
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*>graph;
        for(auto it:employees){
            graph[it->id]=it;
        }
        return solve(id,graph);
    }
};