class MyHashSet {
public:
    bool set[1000001];
    MyHashSet() {
        memset(set,false,sizeof(set));
    }
    void add(int key) {
        set[key]=true;
    }
    
    void remove(int key) {
        set[key]=false;
    }
    
    bool contains(int key) {
        return set[key];
    }
};