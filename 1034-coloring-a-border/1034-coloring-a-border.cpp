class Solution {
public:
    void solve(vector<vector<int>>& grid,int row,int col,int color)
    {
        if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size() || grid[row][col]!=color) return;
        grid[row][col]=INT_MAX;
        solve(grid,row-1,col,color);
        solve(grid,row+1,col,color);
        solve(grid,row,col-1,color);
        solve(grid,row,col+1,color);
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int rows=grid.size(),cols=grid[0].size();
        if(rows==0 || cols==0) return {};
        vector<vector<int>>temp=grid;
        solve(grid,row,col,grid[row][col]);
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(i==0 || j==0 || i==rows-1 || j==cols-1)
                {
                    if(grid[i][j]==INT_MAX) temp[i][j]=color;
                }
                else
                {
                    if(grid[i][j]==INT_MAX and (grid[i-1][j]!=INT_MAX || grid[i+1][j]!=INT_MAX || grid[i][j-1]!=INT_MAX || grid[i][j+1]!=INT_MAX)) temp[i][j]=color;
                }
            }
        }
        return temp;
    }
};