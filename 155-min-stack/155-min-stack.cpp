class MinStack {
    vector<int> st;
public:
    MinStack() {
        // stack<int> st;
    }
    
    void push(int val) {
        st.insert(st.begin(), val);
;    }
    
    void pop() {
        if(!st.empty())
            st.erase(st.begin());
    }
    
    int top() {
        return st[0];
    }
    
    int getMin() {
        return *min_element(st.begin(), st.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */