class RandomizedSet {
public:
    unordered_map<int,int>mp;
    vector<int>nums;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;
        nums.push_back(val);
        mp[val]=nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()) return false;
        int lv=nums.back();
        int idx=mp[val];
        nums[idx]=lv;
        nums.pop_back();
        mp[lv]=idx;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int idx=rand()%nums.size();
        return nums[idx];
    }
};