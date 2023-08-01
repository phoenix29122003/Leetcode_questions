class Solution {
public:
    int maxArea(int a, int b, vector<int>& hc, vector<int>& vc) {
        hc.insert(hc.begin(),0),hc.push_back(a);
        vc.insert(vc.begin(),0),vc.push_back(b);
        sort(hc.begin(),hc.end()),sort(vc.begin(),vc.end());
        int hdiff=0,vdiff=0;
        for(int i=1;i<hc.size();i++) hdiff=max(hdiff,hc[i]-hc[i-1]);
        for(int i=1;i<vc.size();i++) vdiff=max(vdiff,vc[i]-vc[i-1]);
        return (1LL*hdiff*vdiff)%1000000007;
    }
};