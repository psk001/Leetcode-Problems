class RandomizedSet {
    set<int> sval;
    default_random_engine seed;
public:
    RandomizedSet() : seed((random_device())()) {}
    
    bool insert(int val) {
        int s= sval.size();
        sval.insert(val);
        
        return (s<sval.size());
    }
    
    bool remove(int val) {
        int s= sval.size();
        sval.erase(val);
        
        return (s>sval.size());
    }
    
    int getRandom() {
        int k= uniform_int_distribution<>(0, sval.size() - 1)(seed);
        auto itr= sval.begin();
        for(int i=0; i<k; i++)
            itr++;
        
        return *itr;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */