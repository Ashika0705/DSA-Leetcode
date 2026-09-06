class MinStack {
public:

    stack<int> res;
    stack<int>mini;

    MinStack() {
        
    }
   
    void push(int value) {

       if(res.empty()){
        res.push(value);
        mini.push(value);
        return;
       }

       
        res.push(value);
        if(value<=mini.top()) mini.push(value);
       
    }
    
    void pop() {
        int x=res.top();
        res.pop();

        if(x==mini.top()) mini.pop();
    }
    
    int top() {
        int t=res.top();
        return t;
    }
    
    int getMin() {
        int minimum=mini.top();       
    return minimum;
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