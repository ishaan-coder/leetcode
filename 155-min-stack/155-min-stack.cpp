class MinStack {
public:
    stack<int>st1;
    stack<int>st2;
    MinStack() {
        
    }
    
    void push(int val) {
        st1.push(val);
        if(st2.size()==0)
        {
            st2.push(val);
        }
        else if(st2.top()>=val)
        {
            st2.push(val);
        }
    }
    
    void pop() {
        int x=st1.top();
        st1.pop();
        if(st2.top()==x)
            st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
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