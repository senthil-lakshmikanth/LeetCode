class MinStack 
{
public:

    stack <int> nums;
    stack <int> min_stack;

    MinStack() 
    { 
        // Constructor.
    } 
    
    void push(int val) 
    {
        nums.push(val);

        if(min_stack.empty() || val < min_stack.top())
            min_stack.push(val);
        else
            min_stack.push(min_stack.top());
    }
    
    void pop() 
    {
        nums.pop();
        min_stack.pop();    
    }
    
    int top() 
    {
        return nums.top();    
    }
    
    int getMin() 
    {
        return min_stack.top();    
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