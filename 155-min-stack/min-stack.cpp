class MinStack {
public:
    stack<pair<int,int>> s1;
    MinStack() {
        
    }
    
    void push(int value) {
        if(s1.empty()) s1.push({value,value});

        else {
            s1.push({value,min(value,s1.top().second)});
        }
    }
    
    void pop() {
         s1.pop();
    }
    
    int top() {
        return s1.top().first;
    }
    
    int getMin() {
        return s1.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */