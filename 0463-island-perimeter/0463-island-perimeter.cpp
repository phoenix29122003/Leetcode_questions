class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),island=0,repeat=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    island++;
                    if(i+1<m && grid[i+1][j]==1) repeat++;
                    if(j+1<n && grid[i][j+1]==1) repeat++;
                }
            }
        }
        return 4*island-2*repeat;
    }
};
