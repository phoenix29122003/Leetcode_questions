class Solution {
public:
    static bool comp(int a,int b)
    {
        int p=__builtin_popcount(a);
        int q=__builtin_popcount(b);
        if(p==q) return a<=b;
        else return p<q;
    }
    vector<int> sortByBits(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        return nums;
    }
};