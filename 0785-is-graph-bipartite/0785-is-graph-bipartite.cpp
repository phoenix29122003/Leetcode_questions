class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            if(color[i]) continue;
            q.push(i);
            color[i]=1;
            while(q.size()){
                int node=q.front();
                q.pop();
                for(auto neigh:graph[node]){
                    if(color[neigh]==0){
                        color[neigh]=-color[node];
                        q.push(neigh);
                    }
                    else if(color[neigh]==color[node]) return false;
                }   
            }
        }
        return true;
    }
};