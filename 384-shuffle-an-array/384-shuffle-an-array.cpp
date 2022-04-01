class Solution {
    vector<int> store, res;
    default_random_engine engine;
    
public:
    Solution(vector<int>& nums):res(nums), store(nums), engine(random_device{}()) {}
    
    vector<int> reset() {
        res=store;
        return res;
    }
    
    vector<int> shuffle() {
        for(int i=res.size()-1; i>=0; i--){
            int cidx = uniform_int_distribution<int>(0, i)(engine);
            swap(res[i], res[cidx]);
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
        // for (int i = size(arr) - 1; i > 0; --i) {
        //     auto idx = uniform_int_distribution<int>(0, i)(seed);
        //     swap(arr[i], arr[idx]);
        // }
        // return arr;