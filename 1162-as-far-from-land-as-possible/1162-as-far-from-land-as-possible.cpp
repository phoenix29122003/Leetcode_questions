class Solution {
public:
    vector<int>DIR={0,1,0,-1,0};
    int maxDistance(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        for(int r=0;r<m;++r)
            for(int c=0;c<n;++c) 
            {
                if(mat[r][c]==0) mat[r][c]=1;
                else mat[r][c]=0;
            }
        int cnt=0;
        for(int r=0;r<m;++r)
            for(int c=0;c<n;++c) 
            {
                if(mat[r][c]==1) cnt++;
            }
        if(cnt==0 || cnt==m*n) return -1;
        queue<pair<int,int>>q;
        for(int r=0;r<m;++r)
            for(int c=0;c<n;++c)
                if(mat[r][c]==0) q.emplace(r,c);
                else mat[r][c]=-1; 
        while(!q.empty()) 
        {
            auto [r,c]=q.front();q.pop();
            for(int i=0;i<4;++i)
            {
                int nr=r+DIR[i],nc=c+DIR[i+1];
                if(nr<0 || nr==m || nc<0 || nc==n || mat[nr][nc]!=-1) continue;
                mat[nr][nc]=mat[r][c]+1;
                q.emplace(nr,nc);
            }
        }
        int maxi=0;
        for(int r=0;r<m;++r)
            for(int c=0;c<n;++c) 
                maxi=max(maxi,mat[r][c]);
        return maxi;
    }
};