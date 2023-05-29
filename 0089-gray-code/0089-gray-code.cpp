class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int sz=ans.size();
            int mask=1<<(i-1);
            for(int j=sz-1;j>=0;j--) ans.push_back(ans[j]|mask);
        }
        return ans;
    }
};