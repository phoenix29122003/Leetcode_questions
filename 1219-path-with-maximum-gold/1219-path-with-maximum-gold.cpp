class Solution {
public:
    int dfs(vector<vector<int>>&grid,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0) return 0;
        int temp=grid[i][j];
        grid[i][j]=0;
        int ans=temp+max({dfs(grid,i-1,j,m,n),dfs(grid,i+1,j,m,n),dfs(grid,i,j-1,m,n),dfs(grid,i,j+1,m,n)});
        grid[i][j]=temp;
        return ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) ans=max(ans,dfs(grid,i,j,m,n));
        return ans;
    }
};