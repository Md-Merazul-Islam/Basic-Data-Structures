class MyStack {
public:
    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
       queue<int> nwQ;
       int last;
       while(!q.empty())
       {
           int k= q.front();
           q.pop();
           if(q.empty())
           {
               //last element
               last=k;
               break; 
           }
           nwQ.push(k);
       }
       q= nwQ;
       return last;
    }
    
    int top()// sesh  theke
     {
     queue<int> nwQ;
       int last;
       while(!q.empty())
       {
           int k= q.front();
           q.pop();
           if(q.empty())
           {
               //last element
               last=k;
                
           }
           nwQ.push(k);
       }
       q= nwQ;
       return last;
    }
    
    bool empty() {
       return q.empty();
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