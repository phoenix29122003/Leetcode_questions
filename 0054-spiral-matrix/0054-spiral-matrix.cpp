class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& grid) {
        vector<int>ans;
        int row1=0,row2=grid.size()-1,col1=0,col2=grid[0].size()-1,dirxn=1;
        while(row1<=row2 && col1<=col2)
        {
            if(dirxn==1)
            {
                for(int i=col1;i<=col2;i++) ans.push_back(grid[row1][i]);
                row1++,dirxn=2;
            }
            else if(dirxn==2)
            {
                for(int i=row1;i<=row2;i++) ans.push_back(grid[i][col2]);
                col2--,dirxn=3;
            }
            else if(dirxn==3)
            {
                for(int i=col2;i>=col1;i--) ans.push_back(grid[row2][i]);
                row2--,dirxn=4;
            }
            else
            {
                for(int i=row2;i>=row1;i--) ans.push_back(grid[i][col1]);
                col1++,dirxn=1;
            }
        }
        return ans;
    }
};