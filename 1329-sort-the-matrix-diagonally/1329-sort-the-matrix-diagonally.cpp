class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>mp;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) mp[i-j].push(grid[i][j]);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return grid;
    }
};