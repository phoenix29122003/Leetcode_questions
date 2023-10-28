class Solution {
public:
    bool valid(int l,int r,int c){
        if(c<l || c>=r) return false;
        return true;
    }
    int dfs(vector<vector<int>>&grid,int row,int col,int m,int n)
    {
        if(row==m) return col;
        if(valid(0,n,col)){
            if(grid[row][col]==1)
                if(valid(0,grid[0].size(),col+1) && grid[row][col+1]==1) return dfs(grid,row+1,col+1,m,n);
            if(grid[row][col]==-1)
                if(valid(0,grid[0].size(),col-1) && grid[row][col-1]==-1) return dfs(grid,row+1,col-1,m,n);
        }
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++) ans[i]=dfs(grid,0,i,m,n);
        return ans;
    }
};