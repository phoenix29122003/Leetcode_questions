class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size(),m=matrix[0].size();
        int top=0,bottom=n-1,left=0,right=m-1,f=0;
        while(top<=bottom && left<=right){
            if(f==0){
                for(int i=left;i<=right;i++) ans.push_back(matrix[top][i]);
                top++;
                f=1;
            }
            else if(f==1){
                for(int i=top;i<=bottom;i++) ans.push_back(matrix[i][right]);
                right--;
                f=2;
            }
            else if(f==2){
                for(int i=right;i>=left;i--) ans.push_back(matrix[bottom][i]);
                bottom--;
                f=3;
            }
            else{
                for(int i=bottom;i>=top;i--) ans.push_back(matrix[i][left]);
                left++;
                f=0;
            }
        }
        return ans;
    }
};