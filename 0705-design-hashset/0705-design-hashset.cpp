class MyHashSet {
public:
    int mp[1000001];
    MyHashSet() {
        fill(mp,mp+1000001,-1);
    }
    
    void add(int key) {
        mp[key]=1;
    }
    
    void remove(int key) {
        mp[key]=-1;
    }
    
    bool contains(int key) {
        return mp[key]==1;
    }
};