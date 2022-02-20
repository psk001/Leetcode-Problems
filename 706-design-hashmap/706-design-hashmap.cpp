class MyHashMap {
    map<int, int> col;
public:
    MyHashMap() {
       map<int, int> col; 
    }
    
    void put(int key, int value) {
        col[key]=value;
    }
    
    int get(int key) {
        if(col.count(key)==0)
            return -1;
        return col[key];
    }
    
    void remove(int key) {        
        if(col.count(key)==0)
            return;
        col.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */