class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        vector<int>ans;
        int n=encoded.size(),X=0;
        for(int i=1;i<=n+1;i++) X^=i;
        for(int i=1;i<n;i+=2) X^=encoded[i];
        ans.push_back(X);
        for(int i=0;i<n;i++) 
        {
            X^=encoded[i];
            ans.push_back(X);
        }
        return ans;
    }
};