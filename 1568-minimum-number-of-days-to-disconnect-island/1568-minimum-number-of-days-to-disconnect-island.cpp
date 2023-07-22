class Solution {
public:
    void dfs(vector<vector<int>>&grid,vector<vector<int>>&vis,int i,int j)
    {
        int m=grid.size(),n=grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j]==1 || grid[i][j]==0) return;
        vis[i][j]=1;
        dfs(grid,vis,i-1,j),dfs(grid,vis,i+1,j),dfs(grid,vis,i,j-1),dfs(grid,vis,i,j+1);
    }
    int count_island(vector<vector<int>>&grid)
    {
        int m=grid.size(),n=grid[0].size(),ans=0;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(visited[i][j]==0 && grid[i][j])
                {
                    ans++;
                    dfs(grid,visited,i,j);
                }
            }
        }
        return ans;
    }
    int minDays(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int island=count_island(grid);
        if(island>1 || island==0) return 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    grid[i][j]=0;
                    island=count_island(grid);
                    if(island>1 || island==0) return 1;
                    grid[i][j]=1;
                }
            }
        }
        return 2;
    }
};