class Solution {
public:
    int maxArea(int a, int b, vector<int>& hc, vector<int>& vc) {
        vector<int>h,v;
        h.push_back(0),v.push_back(0);
        for(int i=0;i<hc.size();i++) h.push_back(hc[i]);
        for(int i=0;i<vc.size();i++) v.push_back(vc[i]);
        h.push_back(a),v.push_back(b);
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        int vdiff=0,hdiff=0;
        for(int i=1;i<h.size();i++) hdiff=max(hdiff,h[i]-h[i-1]);
        for(int i=1;i<v.size();i++) vdiff=max(vdiff,v[i]-v[i-1]);
        return (1LL*hdiff*vdiff)%1000000007;
    }
};