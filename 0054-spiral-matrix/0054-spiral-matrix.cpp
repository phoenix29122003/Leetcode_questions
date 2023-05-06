class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int dirxn=1;
        int top=0,bottom=n-1,left=0,right=m-1;
        vector<int>ans;
        while(left<=right && top<=bottom)
        {
            if(dirxn==1)
            {
                for(int i=left;i<=right;i++) ans.push_back(matrix[top][i]);
                top++;
                dirxn=2;
            }
            else if(dirxn==2)
            {
                for(int i=top;i<=bottom;i++) ans.push_back(matrix[i][right]);
                right--;
                dirxn=3;
            }
            else if(dirxn==3)
            {
                for(int i=right;i>=left;i--) ans.push_back(matrix[bottom][i]);
                bottom--;
                dirxn=4;
            }
            else
            {
                for(int i=bottom;i>=top;i--) ans.push_back(matrix[i][left]);
                left++;
                dirxn=1;
            }
        }
        return ans;
    }
};