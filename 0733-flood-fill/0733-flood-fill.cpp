class Solution {
public:
    void solve(vector<vector<int>>&img,int i,int j,int prev_col,int new_col,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || img[i][j]!=prev_col) return;
        if(prev_col==new_col) return;
        img[i][j]=new_col;
        solve(img,i+1,j,prev_col,new_col,m,n);
        solve(img,i-1,j,prev_col,new_col,m,n);
        solve(img,i,j+1,prev_col,new_col,m,n);
        solve(img,i,j-1,prev_col,new_col,m,n);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size(),n=image[0].size();
        solve(image,sr,sc,image[sr][sc],color,m,n);
        return image;
    }
};