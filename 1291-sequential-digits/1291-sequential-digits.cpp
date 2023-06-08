class Solution {
public:
    vector<int> ans;
    void solve(int l,int h,int i,int num)
    {
        if(num>=l && num <=h) ans.push_back(num);
        if(num>=h || i>9) return;
        solve(l,h,i+1,num*10+i);
    }
    vector<int> sequentialDigits(int low, int high) {
        for(int i=1;i<10;i++)
            solve(low,high,i,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};