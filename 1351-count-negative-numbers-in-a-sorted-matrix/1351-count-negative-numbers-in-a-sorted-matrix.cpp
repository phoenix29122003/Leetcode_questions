class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0,i=0,m=grid.size(),n=grid[0].size(),j=n-1;
        while(i<m && j>=0){
            while(j>=0 && i<m && grid[i][j]<0) j--;
            ans+=(n-j-1);
            i++;
        }
        if(j==-1 && i<m) ans+=n*(m-i);
        return ans;
    }
};