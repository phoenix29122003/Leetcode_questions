class MyHashSet {
public:
    vector<bool> table;
    MyHashSet() : table(1e6 + 1, false) {}
    
    void add(int key) {
        table[key]=true;
    }
    
    void remove(int key) {
        table[key]=false;
    }
    
    bool contains(int key) {
        return table[key];
    }
};
