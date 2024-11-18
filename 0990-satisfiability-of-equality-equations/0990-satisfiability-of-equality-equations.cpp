class Solution {
public:
    void dfs(char node,unordered_map<char,vector<char>>&graph,unordered_map<char,int>&mp,int color){
        mp[node]=color;
        for(auto neigh:graph[node]){
            if(mp.find(neigh)==mp.end()){
                dfs(neigh,graph,mp,color);
            }
        }
    }
    bool equationsPossible(vector<string>& equations) {
        unordered_map<char,vector<char>>graph;
        for(auto eqn:equations){
            if(eqn[1]=='='){
                char u=eqn[0],v=eqn[3];
                graph[u].push_back(v);
                graph[v].push_back(u);
            }
        }
        unordered_map<char,int>mp;
        int color=0;
        for(auto bond:graph){
            char node=bond.first;
            if(mp.find(node)==mp.end()){
                dfs(node,graph,mp,color);
                color++;
            }
        }
        for(auto eqn:equations){
            char u=eqn[0],v=eqn[3];
            if(u==v && eqn[1]=='!') return false;
            if(eqn[1]=='!'){
                if(mp.count(u) && mp.count(v) && mp[u]==mp[v]) {
                    return false;
                }
            }
        }
        return true;
    }
};