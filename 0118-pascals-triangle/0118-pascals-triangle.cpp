class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        ds.push_back(1);
        ans.push_back(ds);
        if(n==1) return ans;
        ds.push_back(1);
        ans.push_back(ds);
        if(n==2) return ans;
        for(int i=3;i<=n;i++){
            vector<int>newds;
            newds.push_back(1);
            for(int j=0;j<ds.size()-1;j++){
                newds.push_back(ds[j]+ds[j+1]);
            }
            newds.push_back(1);
            ans.push_back(newds);
            ds=newds;
        }
        return ans;
    }
};