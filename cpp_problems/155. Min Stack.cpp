class MinStack {
public:
    vector<long> stack;
    vector<long> stack_min; 

    MinStack() {
        
    }
    
    void push(long val) {
        stack.push_back(val);
        if (stack_min.size() != 0){
            if (stack_min.back() > val){
                stack_min.push_back(val);
            } else {
                stack_min.push_back(stack_min.back());
            }
        } else {
            stack_min.push_back(val);
        }
    }
    
    void pop() {
        stack.pop_back();
        stack_min.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return stack_min.back();
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
