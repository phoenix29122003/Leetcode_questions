class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time=0,rotten=0,total=0,m=grid.size(),n=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    rotten++;
                }
                if(grid[i][j]==1 || grid[i][j]==2) total++;
            }
        }
        vector<vector<int>>dirxn={{-1,0},{1,0},{0,-1},{0,1}};
        while(q.size()){
            int sz=q.size();
            bool new_rotten=false;
            while(sz--){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int new_x=x+dirxn[i][0];
                    int new_y=y+dirxn[i][1];
                    if(new_x>=0 && new_x<m && new_y>=0 && new_y<n && grid[new_x][new_y]==1){
                        grid[new_x][new_y]=2;
                        q.push({new_x,new_y});
                        rotten++;
                        new_rotten=true;
                    }
                }
            }
            if(new_rotten) time++;
        }
        return rotten==total?time:-1;
    }
};