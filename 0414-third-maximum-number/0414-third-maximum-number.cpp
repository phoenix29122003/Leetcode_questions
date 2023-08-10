class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>set;
        for(auto it:nums) set.insert(it);
        vector<int>num;
        for(auto it:set) num.push_back(it);
        int n=num.size();
        if(n<3) return num[n-1];
        else return num[n-3];
    }
};