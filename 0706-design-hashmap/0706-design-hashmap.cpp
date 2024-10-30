class MyHashMap {
public:
    int mp[1000001];
    MyHashMap() {
        fill(mp,mp+1000001,-1);
    }
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key]=-1;
    }
};