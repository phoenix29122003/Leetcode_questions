class Solution {
public:
    int dfs(vector<vector<int>>&grid,int i,int j,int m,int n,int col){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=1) return 0;
        grid[i][j]=col;
        return 1+dfs(grid,i-1,j,m,n,col)+dfs(grid,i+1,j,m,n,col)+dfs(grid,i,j-1,m,n,col)+dfs(grid,i,j+1,m,n,col);
    }
    int largestIsland(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int ans=INT_MIN;
        int m=grid.size(),n=grid[0].size(),color=2;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int area=dfs(grid,i,j,m,n,color);
                    mp[color++]=area;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    int curr=1;
                    unordered_set<int>set;
                    if(i>0 && grid[i-1][j]>1) set.insert(grid[i-1][j]);
                    if(i<m-1 && grid[i+1][j]>1) set.insert(grid[i+1][j]);
                    if(j>0 && grid[i][j-1]>1) set.insert(grid[i][j-1]);
                    if(j<n-1 && grid[i][j+1]>1) set.insert(grid[i][j+1]);
                    for(int colors:set) curr+=mp[colors];
                    ans=max(ans,curr);
                }
            }
        }
        return ans==INT_MIN?m*n:ans;
    }
};