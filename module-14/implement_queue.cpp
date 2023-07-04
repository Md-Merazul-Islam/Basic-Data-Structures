class MyQueue {
public:
    stack<int> st;
    

    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> newst;
        int last;
        while (!st.empty())
        {
            int k= st.top();
            st.pop();
            if(st.empty())
            {
                last =k;
                break;
            }
            newst.push(k);

        }
        while(!newst.empty())
        {
            st.push(newst.top());
            newst.pop();
        }
        return last;
    }
    
    int peek() {
        stack<int> newst;
        int last;
        while (!st.empty())
        {
            int k= st.top();
            st.pop();
            if(st.empty())
            {
                last =k;
               
            }
            newst.push(k);

        }
        while(!newst.empty())
        {
            st.push(newst.top());
            newst.pop();
        }
        return last;
    }
    bool empty() {
        return st.empty();
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