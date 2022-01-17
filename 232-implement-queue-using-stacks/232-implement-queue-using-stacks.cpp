class MyQueue {
        stack<int> m;
        stack<int> s;    
public:
    MyQueue() {

    }
    
    void push(int x) {
        while(not m.empty()){
            int k=m.top();
            m.pop();
            s.push(k);
        }
        
        m.push(x);
        
        while(not s.empty()){
            int k=s.top();
            s.pop();
            m.push(k);
        }
    }
    
    int pop() {
        int k=m.top();
        m.pop();
        return k;
    }
    
    int peek() {
        return m.top();
    }
    
    bool empty() {
        return (m.size()==0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */