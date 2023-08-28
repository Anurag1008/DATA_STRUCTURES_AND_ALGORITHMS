//225. Implement stack using Queues

/*
class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        queue<int>q1;
        while(!q.empty()){
            q1.push(q.front());
            q.pop();
        }
        q.push(x);
        while(!q1.empty()){
            q.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int remove = q.front();
        q.pop();
        return remove;
    }
    
    int top() {
        int top = q.front();
        return top;      
    }
    
    bool empty() {
        int size = q.size();
        if(size == 0) return true;
        else return false;
        
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
*/