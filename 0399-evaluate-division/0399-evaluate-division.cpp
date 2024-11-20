class Solution {
public:
    double solve(string src,string dest,unordered_set<string>visited,unordered_map<string,unordered_map<string,double>>&graph){
        if(graph.find(src)==graph.end() || graph.find(dest)==graph.end()) return -1.0;
        if(src==dest) return 1.0;
        visited.insert(src);
        for(auto neigh:graph[src]){
            string neighNode=neigh.first;
            double valTillNow=neigh.second;
            if(visited.find(neighNode)==visited.end()){
                double result=solve(neigh.first,dest,visited,graph);
                if(result!=-1)
                    return result*valTillNow;
            }
        }
        return -1.0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,unordered_map<string,double>>graph;
        for(int i=0;i<equations.size();i++){
            string a=equations[i][0],b=equations[i][1];
            double value=values[i];
            graph[a][b]=value;
            graph[b][a]=1.0/value;
        }
        vector<double>ans;
        for(auto it:queries){
            string src=it[0],dest=it[1];
            unordered_set<string>visited;
            ans.push_back(solve(src,dest,visited,graph));
        }
        return ans;
    }
};