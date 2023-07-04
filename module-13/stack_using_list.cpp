 #include <bits/stdc++.h>
 
 using namespace std;
 class myStack
 {
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);//tail insert
    }

    void pop()
    {
        l.pop_back();//tail delete
    }

    int top()// tail value 
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if (l.size()==0) return true;
        else return false;
    }
 };
 int main()
 {
    myStack st;
    int n;
    cin>>n;

     for (int i=0; i<n; i++)
     {
        int x;
        cin>>x;
        st.push(x);
     }

     while( !st.empty())// empty na hoy
     {
        cout<<st.top() <<endl;
        st.pop();
     }
     return 0;
 }