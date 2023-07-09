class NumArray {
public:
    vector<int>pref;
    NumArray(vector<int>& nums) {
        pref.push_back(0);
        for(auto x:nums) pref.push_back(pref.back()+x);
    }
    
    int sumRange(int left, int right) {
        return pref[right+1]-pref[left];
    }
};