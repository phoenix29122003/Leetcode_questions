class Solution {
public:
    int maxArea(int h, int w, vector<int>& hcut, vector<int>& vcut) {
        long long ans=0,m=hcut.size(),n=vcut.size();
        int hmax=INT_MIN,vmax=INT_MIN;
        sort(hcut.begin(),hcut.end());
        sort(vcut.begin(),vcut.end());
        for(int i=0;i<m-1;i++) hmax=max(hmax,abs(hcut[i]-hcut[i+1]));
        for(int i=0;i<n-1;i++) vmax=max(vmax,abs(vcut[i]-vcut[i+1]));
        hmax=max(hmax,max(hcut[0]-0,h-hcut[m-1]));
        vmax=max(vmax,max(vcut[0]-0,w-vcut[n-1]));
        cout<<"hmax: "<<hmax<<endl;
        cout<<"vmax: "<<vmax<<endl;
        return ((1LL*hmax*vmax)%1000000007);
    }
};