class Solution {
public:
    void solve(vector<vector<int>>& grid,int i,int j,int color1,int m,int n,int color2){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=color1 || grid[i][j]==color2) return;
        grid[i][j]=color2;
        solve(grid,i-1,j,color1,m,n,color2);
        solve(grid,i+1,j,color1,m,n,color2);
        solve(grid,i,j-1,color1,m,n,color2);
        solve(grid,i,j+1,color1,m,n,color2);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        solve(grid,sr,sc,grid[sr][sc],grid.size(),grid[0].size(),color);
        return grid;
    }
};