class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1) 
        {
            vector<int>v;
            v.push_back(1);
            vector<vector<int>>ans;
            ans.push_back(v);
            return ans;
        }
        vector<vector<int>>ans;
        vector<int>v;
        v.push_back(1);
        ans.push_back(v);
        v.clear();
        v.push_back(1);
        v.push_back(1);
        ans.push_back(v);
        vector<int>nv;
        for(int i=0;i<n-2;i++)
        {
            nv.clear();
            nv.push_back(1);
            for(int j=0;j<v.size()-1;j++) nv.push_back(v[j]+v[j+1]);
            nv.push_back(1);
            ans.push_back(nv);
            v=nv;
        }
        return ans;
    }
};