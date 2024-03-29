class TimeMap {
public:
    TimeMap() {}
    
    unordered_map<string,map<int,string>>mp;
    void set(string key, string value, int timestamp) {
        mp[key].insert({timestamp,value});
    }
    string get(string key, int timestamp) {
        auto it=mp[key].upper_bound(timestamp);
        return it==mp[key].begin()?"":prev(it)->second;
    }
};