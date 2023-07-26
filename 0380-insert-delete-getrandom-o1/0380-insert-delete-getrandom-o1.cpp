class RandomizedSet {
public:
    unordered_map<int,int>mp;
    vector<int>vec;
    RandomizedSet() {}
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;
        vec.push_back(val);
        mp[val]=vec.size()-1;
        return true;
    }
    bool remove(int val) {
        if(mp.find(val)==mp.end()) return false;
        int last=vec.back();
        vec[mp[val]]=last;
        mp[last]=mp[val];
        vec.pop_back();
        mp.erase(val);
        return true;
    }
    int getRandom() {
        int rand_idx=rand()%vec.size();
        return vec[rand_idx];
    }
};