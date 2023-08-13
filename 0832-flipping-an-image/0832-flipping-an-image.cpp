class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++) reverse(grid[i].begin(),grid[i].end());
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) grid[i][j]^=1;
        return grid;
    }
};