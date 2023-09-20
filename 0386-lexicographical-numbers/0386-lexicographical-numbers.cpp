class Solution {
public:
    void solve(int d,int n,vector<int>&ans){
        if(d>n) return;
        else if(d<=n) ans.push_back(d);
        int num=d;
        for(int i=0;i<=9;i++){
            num=d*10+i;
            solve(num,n,ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        for(int i=1;i<=9;i++) solve(i,n,ans);
        return ans;
    }
};