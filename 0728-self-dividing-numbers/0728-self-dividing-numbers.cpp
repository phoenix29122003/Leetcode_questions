class Solution {
public:
    bool check(int n){
        int num=n;
        while(n){
            int rem=n%10;
            if(rem==0) return false;
            if(num%rem) return false;
            n=n/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++) if(check(i)) ans.push_back(i);
        return ans;
    }
};