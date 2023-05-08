class Solution {
public:
    void solve(vector<vector<int>>& image,int sr,int sc,int col,int val,int n,int m)
    {
        if(sr<0 || sc<0 || sr>=n || sc>=m || image[sr][sc]==col || image[sr][sc]!=val) return;
            image[sr][sc]=col;
            solve(image,sr+1,sc,col,val,n,m);
            solve(image,sr-1,sc,col,val,n,m);
            solve(image,sr,sc+1,col,val,n,m);
            solve(image,sr,sc-1,col,val,n,m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int n=image.size();
        int m=image[0].size();
        int val=image[sr][sc];
        solve(image,sr,sc,color,val,n,m);
        return image;
    }
};