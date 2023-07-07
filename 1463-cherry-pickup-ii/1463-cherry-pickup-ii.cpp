class Solution {
public:
    int arr[70][70][70];
    int dp( int row,int col1,int col2, vector<vector<int>>& grid)
    {
        if(col1<0 || col1>=grid[0].size() || col2<0 || col2>=grid[0].size()) return 0; 
        if(arr[row][col1][col2]!=-1) return arr[row][col1][col2]; 
        int res=0;
        res+=grid[row][col1]+grid [row][col2];
        if(col1==col2) res-=grid[row][col1];
        if(row!=grid.size()-1)
        {
            int mxx=0;
            for(int j1=col1-1;j1<=col1+1;j1++)
                for(int j2=col2-1;j2<=col2+1;j2++)
                    mxx=max(mxx,dp(row+1,j1,j2,grid));
            res+=mxx;
        }
        return arr[row][col1][col2]=res;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        memset(arr,-1,sizeof(arr));
        return dp(0,0,m-1,grid);
    }
};