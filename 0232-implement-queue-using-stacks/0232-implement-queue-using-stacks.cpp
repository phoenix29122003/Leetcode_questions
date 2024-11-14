class MyQueue {
public:
    stack<int>st1,st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st1.empty()) st1.push(x);
        else{
            while(st1.size()){
                st2.push(st1.top());
                st1.pop();
            }
            st1.push(x);
            while(st2.size()){
                st1.push(st2.top());
                st2.pop();
            }
        }
    }
    
    int pop() {
        if(st1.size()){
            int x=st1.top();
            st1.pop();
            return x;
        }
        else{
            return -1;
        }
    }
    
    int peek() {
        if(st1.size()) return st1.top();
        else return -1;
    }
    
    bool empty() {
        return st1.empty();
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