class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int>a(7),b(7),same(7);
        int ans=INT_MAX,n=tops.size();
        for(int i=0;i<n;i++)
        {
            a[tops[i]]++;
            b[bottoms[i]]++;
            if(tops[i]==bottoms[i]) same[tops[i]]++;
        }
        for(int i=1;i<=6;i++)
        {
            if(a[i]+b[i]-same[i]==n) ans=min(ans,min(a[i],b[i])-same[i]);
        }
        return ans==INT_MAX?-1:ans;
    }
};