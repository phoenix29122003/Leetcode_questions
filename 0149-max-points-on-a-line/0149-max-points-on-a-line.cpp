class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(),ans=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int cnt=2,slope;
                int x1=points[i][0],x2=points[j][0],y1=points[i][1],y2=points[j][1];
                for(int k=0;k!=i &&k!=j&&k<n;k++){
                    int x=points[k][0],y=points[k][1];
                    if((y2-y1)*(x1-x)==(x2-x1)*(y1-y)) cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};