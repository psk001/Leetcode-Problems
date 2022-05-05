class MyStack {
    queue<int> q1, q2;
    int tp;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        tp=x;
    }
    
    int pop() {
        int s=q1.size();
        s--;
        while(s--){
            int k=q1.front();
            q2.push(k);
            q1.pop();
            tp=k;
        }
        
        int res=q1.front();
        q1.pop();
        
        while(not q2.empty()){
            int k=q2.front();
            q1.push(k);
            q2.pop();           
        }
        
        return res;
    }
    
    int top() {
        return tp;
    }
    
    bool empty() {
        cout << "size: " << q1.size() << endl;
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */