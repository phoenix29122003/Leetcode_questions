class Solution {
public:
    int bfs(vector<vector<int>>&forest,int sr,int sc,int tr,int tc){
        int m=forest.size(),n=forest[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        visited[sr][sc]=true;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int step=0;
        vector<vector<int>>dirxn={{-1,0},{1,0},{0,-1},{0,1}};
        while(q.size()){
            int sz=q.size();
            while(sz--){
                int cr=q.front().first,cc=q.front().second;
                q.pop();
                if(cr==tr && cc==tc) return step;
                for(int i=0;i<4;i++){
                    int nr=cr+dirxn[i][0],nc=cc+dirxn[i][1];
                    if(nr>=0 && nr<m && nc>=0 && nc<n && !visited[nr][nc] && forest[nr][nc]!=0){
                        q.push({nr,nc});
                        visited[nr][nc]=true;
                    }
                }
            }
            step++;
        }
        return -1;
    }
    int cutOffTree(vector<vector<int>>& forest) {
        if(forest[0][0]==0) return -1;
        int m=forest.size(),n=forest[0].size();
        vector<vector<int>>trees;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(forest[i][j]>1){
                    trees.push_back({forest[i][j],i,j});
                }
            }
        }
        sort(trees.begin(),trees.end());
        int ans=0;
        int startX=0,startY=0;
        for(int i=0;i<trees.size();i++){
            int step=bfs(forest,startX,startY,trees[i][1],trees[i][2]);
            if(step==-1) return -1;
            ans+=step;
            startX=trees[i][1],startY=trees[i][2];
        }
        return ans;
    }
};