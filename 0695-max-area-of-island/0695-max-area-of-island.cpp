class Solution {
public:
    int solve(vector<vector<int>>&grid,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0) return 0;
        grid[i][j]=0;
        return 1+solve(grid,i-1,j,m,n)+solve(grid,i+1,j,m,n)+solve(grid,i,j-1,m,n)+solve(grid,i,j+1,m,n);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]) ans=max(ans,solve(grid,i,j,m,n));
            }
        }
        return ans;
    }
};